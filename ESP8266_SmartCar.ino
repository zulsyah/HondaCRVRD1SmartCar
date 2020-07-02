#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <dht11.h>
#include <SoftwareSerial.h>
#include <TinyGPS++.h>
#include "Arduino.h"
#include "PCF8574.h"
#include <Adafruit_ADS1015.h>

/* This is SmartCar Project using ESP8266, 8-ch relays, DHT11, Voltage sense and GPS
 * You must know my relays using LOW trigger to activate relays.. i donno why.. haha
 * made by Zulfhanizam Amir Syahputra, zulsyah7@gmail.com
 */

char auth[] = "Your Blynk Auth";

char ssid[] = "Your SSID";
char pass[] = "Your WiFi password";

SoftwareSerial gpsSerial(D3,D4);
TinyGPSPlus gps;
BlynkTimer timer;
PCF8574 pcf8574_1(0x20);
PCF8574 pcf8574_2(0x21);
Adafruit_ADS1115 ads;

int data = 0;
bool armStatus;
bool engineStatus = true;
bool hazardBool = false;
bool triggerStatus = false;
int voltageOffset = 20;
float lattitude,longitude;

//Ignition Relays
#define accPin P0
#define onPin P1
#define on2Pin P2
#define startPin P3

//AUX Relay
#define lockPin P0
#define unlockPin P1
#define hornPin P2
#define trunkPin P3
#define nightLightPin P4

#define DHT11PIN D0
#define vibrationPin D5

#define testPin my_mux.channel(8);

dht11 DHT11;

void setup()
{
  Serial.begin(115200);
  gpsSerial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  pinMode(vibrationPin, INPUT);
  pcf8574_1.pinMode(accPin, OUTPUT);
  pcf8574_1.pinMode(onPin, OUTPUT);
  pcf8574_1.pinMode(startPin, OUTPUT);
  pcf8574_1.pinMode(on2Pin, OUTPUT);
  pcf8574_2.pinMode(unlockPin, OUTPUT);
  pcf8574_2.pinMode(lockPin, OUTPUT);
  pcf8574_2.pinMode(trunkPin, OUTPUT);
  pcf8574_2.pinMode(hornPin, OUTPUT);
  pcf8574_2.pinMode(nightLightPin, OUTPUT);

  pcf8574_1.begin();
  pcf8574_2.begin();
  ads.begin();

  pcf8574_1.digitalWrite(accPin, HIGH);
  pcf8574_1.digitalWrite(onPin, HIGH);
  pcf8574_1.digitalWrite(startPin, HIGH);
  pcf8574_1.digitalWrite(on2Pin, HIGH);
  pcf8574_2.digitalWrite(unlockPin, HIGH);
  pcf8574_2.digitalWrite(lockPin, HIGH);
  pcf8574_2.digitalWrite(trunkPin, HIGH);
  pcf8574_2.digitalWrite(hornPin, HIGH);
  pcf8574_2.digitalWrite(nightLightPin, HIGH);

  timer.setInterval(500L, sendSensorData);
  timer.setInterval(75L, sendAlarmTrigger);
  timer.setInterval(50L, sendGPSData);

}

void loop()
{
  Blynk.run();
  timer.run();
}

void sendText(){

  if (data == 7)
    Blynk.virtualWrite(V20, "Lock  ");

  if (data == 6)
    Blynk.virtualWrite(V20, "Unlock");

  if (data == 3)
    Blynk.virtualWrite(V21, "Engine Start!");

  if (data == 5)
    Blynk.virtualWrite(V21, "Engine Off   ");

  if (data == 1)
    Blynk.virtualWrite(V21, "ACC Mode Only");

  if (data == 2)
    Blynk.virtualWrite(V21, "Ignition Mode");

  if (data == 8)
    Blynk.virtualWrite(V22, "Trunk Opened ");

  if (data == 9)
    Blynk.virtualWrite(V21, "1            ");
}

void sendSensorData(){
  
  int chk = DHT11.read(DHT11PIN);
  int volt = ads.readADC_SingleEnded(0);// read the input (analog 15bit)
  double voltage = map(volt,0,32768, 0, 3330) - voltageOffset;
  
  voltage /=100;

  Blynk.virtualWrite(V26, DHT11.humidity);
  Blynk.virtualWrite(V25, DHT11.temperature);
  Blynk.virtualWrite(V27, voltage);

  /*
  if (digitalRead(vibrationPin) == HIGH);{
    Blynk.virtualWrite(V5, 1);
  }
  if (digitalRead(vibrationPin) == LOW);{
    Blynk.virtualWrite(V5, 0);
  }*/

}

void sendAlarmTrigger(){
  
  int volt = ads.readADC_SingleEnded(1);// read the input (analog 15bit)
  double voltage = map(volt,0,32768, 0, 3330) - voltageOffset;
  
  voltage /=100;

  if ( voltage > 4.00 && voltage < 60 && armStatus == true && engineStatus == false ){
    Blynk.virtualWrite(V5, "hi");
  }
}

void sendGPSData(){
    while (gpsSerial.available())
  {
    int data = gpsSerial.read();
    if (gps.encode(data))
    {

      Blynk.virtualWrite(V28, gps.location.lat());
      Blynk.virtualWrite(V29, gps.location.lng());
      Blynk.virtualWrite(V30, gps.satellites.value());
      Blynk.virtualWrite(V31, gps.speed.kmph());

    }
  }
}

BLYNK_WRITE(V1){
  
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  // You can also use:
  // String i = param.asStr();
  // double d = param.asDouble();

  if (pinValue == 1){
    //Acc mode
    engineStatus = false;
    pcf8574_1.digitalWrite(accPin, LOW);
    pcf8574_1.digitalWrite(onPin, HIGH);
    pcf8574_1.digitalWrite(on2Pin, HIGH);
    data = pinValue;
    timer.setInterval(1000L, sendText);
  }

  if (pinValue == 2){
    //Ignition Pin
    data = pinValue;
    timer.setInterval(1000L, sendText);
    engineStatus = false;
    pcf8574_1.digitalWrite(accPin, LOW);
    pcf8574_1.digitalWrite(onPin, LOW);
    pcf8574_1.digitalWrite(on2Pin, HIGH);
  }

  if (pinValue == 3){
    //Start Engine and Idling
    armStatus = false;
    armCar(armStatus);
    startCar(engineStatus);
  }

  if (pinValue == 4){
   
    pcf8574_2.digitalWrite(hornPin, LOW);
  }

  if (pinValue != 4){
   
    pcf8574_2.digitalWrite(hornPin, HIGH);
  }

  if (pinValue == 5){
    data = pinValue;
    timer.setInterval(500L, sendText);
    engineStatus = false;
    pcf8574_1.digitalWrite(accPin, HIGH);
    pcf8574_1.digitalWrite(onPin, HIGH);
    pcf8574_1.digitalWrite(on2Pin, HIGH);
  }

  if (pinValue == 6){
    armStatus = false;
    armCar(armStatus);
    Blynk.virtualWrite(V5, "lo");
  }

  if (pinValue == 7){
    armStatus = true;
    armCar(armStatus);
  }

  if (pinValue == 8){
    pcf8574_2.digitalWrite(trunkPin, LOW);
    delay(100);
    pcf8574_2.digitalWrite(trunkPin, HIGH);
  }

  if (pinValue == 9){
    pcf8574_2.digitalWrite(nightLightPin, LOW);
  }

  if (pinValue == 10){
    pcf8574_2.digitalWrite(nightLightPin, HIGH);
  }
}

void armCar(bool status){

  if (status){
    data = 7;
    timer.setInterval(500L, sendText);
    pcf8574_2.digitalWrite(lockPin, LOW);
    delay(100);
    pcf8574_2.digitalWrite(lockPin, HIGH);
  }
  else {
    data = 6;
    timer.setInterval(500L, sendText);
    pcf8574_2.digitalWrite(unlockPin, LOW);
    delay(100);
    pcf8574_2.digitalWrite(unlockPin, HIGH);
  }
}

void startCar(bool status){

  if (status==false){
      data = 3;
      timer.setInterval(500L, sendText);
      pcf8574_1.digitalWrite(startPin, HIGH);
      pcf8574_1.digitalWrite(accPin, LOW);
      pcf8574_1.digitalWrite(onPin, LOW);
      pcf8574_1.digitalWrite(on2Pin, HIGH);
      delay(1500);
      pcf8574_1.digitalWrite(startPin, LOW);
      pcf8574_1.digitalWrite(accPin, HIGH);
      pcf8574_1.digitalWrite(onPin, LOW);
      pcf8574_1.digitalWrite(on2Pin, HIGH);
      delay(1000);
      pcf8574_1.digitalWrite(startPin, HIGH);
      pcf8574_1.digitalWrite(accPin, LOW);
      pcf8574_1.digitalWrite(onPin, LOW);
      pcf8574_1.digitalWrite(on2Pin, LOW);
      engineStatus = true;
  }
  if (status){
      data = 9;
      timer.setInterval(1000L, sendText);
  }
}
