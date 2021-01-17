# Honda CRV RD1 SmartCar v1.0
by Zulfhanizam Amir Syahputra (AZ Putra)

My other projects are in my digital CV : https://zulsyah7.wixsite.com/mycv

Youtube video link : https://youtu.be/yGgvV8Z005A

<a href="https://youtu.be/yGgvV8Z005A">
<p align="center"> 
<img src="https://yt-embed.herokuapp.com/embed?v=yGgvV8Z005A">
</p>
</a>

# Bahasa Melayu #

Assalamualaikum, syukur ke hadrat ilahi kerana dengan kurniaNya saya dapat menghasilkan projek ini. Projek ini masih tidak siap sepenuhnya tapi saya berpuas hati dengan apa yang saya dapat capai.

Laman Github ini mengandungi kod sumber (source code) bagi modul ESP8266 dan juga fail (.aia) kepada penghasilan aplikasi yang saya bangunkan menggunakan MIT App Inventor.

Untuk memuat turun kod Arduino, sila muat turun fail yang bernama `ESP8266_SmartCar.ino` manakala untuk memuat turun fail (.aia), sila muat turun fail yang bernama `HondaCRV_RD1_smartcar.aia`.

### Litar skematik dan cara pasang

Anda boleh melihat litar skematik yang lengkap pada laman Instructable saya di https://www.instructables.com/Honda-CRV-RD1-SmartCar-V10/.

### Cara penggunaan sistem ini

1. Buka fail `ESP8266_SmartCar.ino` menggunakan Arduino IDE
2. Muat turun aplikasi Blynk dari Google Play Store pada telefon anda
3. Daftarkan NodeMCU ESP8266 anda dan dapatkan token Blynk anda menggunakan aplikasi tersebut
4. Ubah nama dan katalaluan WiFi anda serta token Blynk yang anda perolehi tadi

```java
//Token Blynk anda
char auth[] = "Your Blynk Auth";

//Nama dan kataluan WiFi anda
char ssid[] = "Your SSID";
char pass[] = "Your WiFi password";
```
5. Simpan dan muat naik kod tersebut ke ESP8266
6. Buka fail `HondaCRV_RD1_smartcar.aia` dengan mengimport ke MIT App Inventor
7. Cari `global token` dan ubah kepada token Blynk anda seperti dibawah
<p align="centre"> <img src="https://i.imgur.com/xWP7rzB.jpg"> </p>

### Antara muka pengguna aplikasi ini

Aplikasi ini hanya mempunyai satu antara muka sahaja.
<p align="centre"> <img src="https://i.imgur.com/OzQiomU.jpg" width="25%" height="25%"> </p>

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
