# Honda CRV RD1 SmartCar v1.0
by Zulfhanizam Amir Syahputra (AZ Putra)

Youtube video link : https://youtu.be/yGgvV8Z005A

<a href="https://youtu.be/yGgvV8Z005A">
<p align="center"> 
<img src="https://yt-embed.herokuapp.com/embed?v=yGgvV8Z005A">
</p>
</a>

# Bahasa Melayu #

Assalamualaikum, syukur ke hadrat ilahi kerana kurniaNya saya dapat menghasilkan projek ini. Projek ini masih tidak siap sepenuhnya tapi saya berpuas hati dengan apa yang saya dapat capai.

Laman Github ini mengandungi kod sumber (source code) bagi modul ESP8266 dan juga fail (.aia) kepada penghasilan aplikasi yang saya bangunkan menggunakan MIT App Inventor.

Untuk memuat turun kod Arduino, sila muat turun fail yang bernama 'ESP8266_SmartCar.ino' manakala untuk memuat turun fail (.aia), sila muat turun fail yang bernama 'HondaCRV_RD1_smartcar.aia'.

**Cara penggunaan sistem ini***

1. Buka fail (.ino) menggunakan Arduino IDE
2. Ubah nama WiFi dan katalaluan WiFi anda serta ubah Blynk token anda (sila rujuk Google untuk mencari token Blynk anda)

'''c++
// Load the sub-image you want to find that appears in the image, respectively.
BufferedImage subimage = ImageIO.read(new File("/tmp/sub_image.png"));
BufferedImage image = ImageIO.read(new File("/tmp/image.png"));

// Attempt to find the match.
Point match = FindImage.match(subimage, image);

// If null, no match. Otherwise, show where the match occurred.
if (match == null) {
  System.out.println("No match found.");
}
else {
  System.out.println("Found image at " + match.x + "," + match.y);
}
'''

**Senarai modul / sensor yang digunakan**

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

**Senarai perpustakaan yang digunakan**

BlynkSimpleEsp8266 | ESP8266WiFi | dht11 | SoftwareSerial
----- | ----- | ----- | ----- |
**TinyGPS++** | **Arduino** | **PCF8574** | **Adafruit_ADS1015**

__________________________________________________________________________________________________________________

# English #

To download the code, please download file named 'ESP8266_SmartCar.ino'

**List of sensors and modules that used in this project**

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

**List of libraries used**

BlynkSimpleEsp8266 | ESP8266WiFi | dht11 | SoftwareSerial
----- | ----- | ----- | ----- |
**TinyGPS++** | **Arduino** | **PCF8574** | **Adafruit_ADS1015**
