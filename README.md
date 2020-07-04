# Honda CRV RD1 SmartCar v1.0
by Zulfhanizam Amir Syahputra (AZ Putra)

Youtube video link : https://youtu.be/yGgvV8Z005A

<a href="https://youtu.be/yGgvV8Z005A">
<p align="center"> 
<img src="https://yt-embed.herokuapp.com/embed?v=yGgvV8Z005A">
</p>
</a>

# Bahasa Melayu #

Assalamualaikum, syukur ke hadrat ilahi kerana dengan kurniaNya saya dapat menghasilkan projek ini. Projek ini masih tidak siap sepenuhnya tapi saya berpuas hati dengan apa yang saya dapat capai.

Laman Github ini mengandungi kod sumber (source code) bagi modul ESP8266 dan juga fail (.aia) kepada penghasilan aplikasi yang saya bangunkan menggunakan MIT App Inventor.

Untuk memuat turun kod Arduino, sila muat turun fail yang bernama 'ESP8266_SmartCar.ino' manakala untuk memuat turun fail (.aia), sila muat turun fail yang bernama 'HondaCRV_RD1_smartcar.aia'.

### Cara penggunaan sistem ini

1. Buka fail (.ino) menggunakan Arduino IDE
2. Muat turun aplikasi Blynk dari Google Play Store pada telefon anda
3. Daftar NodeMCU ESP8266 dan dapatkan token Blynk anda menggunakan aplikasi tersebut
4. Ubah nama dan katalaluan WiFi anda serta token Blynk yang anda perolehi tadi

```java
//Token Blynk anda
char auth[] = "Your Blynk Auth";

//Nama dan kataluan WiFi anda
char ssid[] = "Your SSID";
char pass[] = "Your WiFi password";
```
5. Simpan dan muat naik kod tersebut ke ESP8266
6. Buka fail (.aia) dengan mengimport ke MIT App Inventor
7. Ubah token Blynk pada fail tersebut
<img src="data:image/png;base64,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">

### Senarai modul / sensor yang digunakan

Bil | Nama modul | Kuantiti | Pautan pembelian
------------- | ------------- | ------------- | ------------- |
1 | NodeMCU v2 ESP8266 Board | 1 | https://shopee.com.my/Arduino-NODEMCU-Lua-IoT-I2C-ESP8266-Wifi-Controller-Board-ESP-12-V2-i.33091591.480433851
2 | 8-channel relays 12v | 1 | https://shopee.com.my/Arduino-IoT-8-Channel-Way-Opto-Isolator-5V-Relay-Module-i.33091591.1027038464
3 | 4-channel relays 5v | 1 | https://shopee.com.my/Arduino-IoT-4-Channel-Ways-Opto-Isolator-10A-5V-Relay-Module-i.33091591.733102947
4 | GY-NEO6MV2 GPS Module | 1 | https://shopee.com.my/Arduino-GY-NEO6MV2-GPS-Track-Location-Tracking-Flight-Control-GPS-Module-with-Antenna-MWC-AMP2.5-i.33091591.943603180
5 | Mini DC-DC 4.5-24V to 5V 3A Step Down | 1 | https://shopee.com.my/product/33091591/2353226119
6 | ADS1115 16-bit Analog to Digital Converter | 1 | https://shopee.com.my/product/132528683/6917873642
7 | PCF8574T I2C IIC Extension Board | 2 | https://shopee.com.my/product/132528683/5931423335
8 | Voltage Sensor Module | 2 | https://shopee.com.my/product/132528683/2883120650
9 | DHT11 Temperature and Humidity Sensor Module | 1 | https://shopee.com.my/product/132528683/2011544803
10 | MB102 830 Holes Large Solderless Breadboard | 1 | https://shopee.com.my/product/132528683/2006168670

### Senarai perpustakaan yang digunakan

BlynkSimpleEsp8266 | ESP8266WiFi | dht11 | SoftwareSerial
----- | ----- | ----- | ----- |
**TinyGPS++** | **Arduino** | **PCF8574** | **Adafruit_ADS1015**

__________________________________________________________________________________________________________________

# English #

To download the code, please download file named 'ESP8266_SmartCar.ino'

### List of sensors and modules that used in this project

No | Modules name | Quantity | Purchase links
------------- | ------------- | ------------- | ------------- |
1 | NodeMCU v2 ESP8266 Board | 1 | https://shopee.com.my/Arduino-NODEMCU-Lua-IoT-I2C-ESP8266-Wifi-Controller-Board-ESP-12-V2-i.33091591.480433851
2 | 8-channel relays 12v | 1 | https://shopee.com.my/Arduino-IoT-8-Channel-Way-Opto-Isolator-5V-Relay-Module-i.33091591.1027038464
3 | 4-channel relays 5v | 1 | https://shopee.com.my/Arduino-IoT-4-Channel-Ways-Opto-Isolator-10A-5V-Relay-Module-i.33091591.733102947
4 | GY-NEO6MV2 GPS Module | 1 | https://shopee.com.my/Arduino-GY-NEO6MV2-GPS-Track-Location-Tracking-Flight-Control-GPS-Module-with-Antenna-MWC-AMP2.5-i.33091591.943603180
5 | Mini DC-DC 4.5-24V to 5V 3A Step Down | 1 | https://shopee.com.my/product/33091591/2353226119
6 | ADS1115 16-bit Analog to Digital Converter | 1 | https://shopee.com.my/product/132528683/6917873642
7 | PCF8574T I2C IIC Extension Board | 2 | https://shopee.com.my/product/132528683/5931423335
8 | Voltage Sensor Module | 2 | https://shopee.com.my/product/132528683/2883120650
9 | DHT11 Temperature and Humidity Sensor Module | 1 | https://shopee.com.my/product/132528683/2011544803
10 | MB102 830 Holes Large Solderless Breadboard | 1 | https://shopee.com.my/product/132528683/2006168670

### List of libraries used

BlynkSimpleEsp8266 | ESP8266WiFi | dht11 | SoftwareSerial
----- | ----- | ----- | ----- |
**TinyGPS++** | **Arduino** | **PCF8574** | **Adafruit_ADS1015**
