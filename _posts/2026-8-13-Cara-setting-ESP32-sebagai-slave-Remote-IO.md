---
layout: single
title: "Cara setting ESP32 sebagai slave Remote IO"
excerpt: "esp32 rs485 as slave"
author_profile: "true"
#header:
#  image: /assets/images/esp32-rs485.jpg
#  teaser: /assets/images/esp32-rs485.jpg 
categories:
  - blog
tags:
  - jekyll
  - comments
  - layout
---
![Ilustrasi Modbus dan ESP32](/assets/images/esp32-rs485.jpg)

# Step 1 Persiapan hardware 
terminasi kabel sbb:
**ESP32** -- **TTL to RS485** -- **USB to RS485**



# Step 2 Persiapan Software 
* Arduino IDE
* Modbus Poll

# Step 3 Programming Arduino IDE
1. Pilih board ESP32 dan COM serial yang aktif.
2. Upload program.
```cpp
Test
```
# Step 4 Testing menggunakan Modbus Poll
Kirim perintah ke Slave ESP32:
1. Hubungkan A-B modul RS485 di ESP32 ke USB to RS485.
2. Hubungkan USB to RS485 ke komputer.
3. Sesuaikan settingan COM, baudrate,data bit,parity,stop bit, lalu konek.
4. Kirim perintah *write coil* dengan ID 10 dan address 1, pilih ON atau OFF.

---
**Resource:**
* Download program ino: [tes_esp32_modbusSlave_2.ino](https://taufikmas.github.io/assets/files/tes_esp32_modbusSlave_2.ino)
* Library modbus Arduino IDE
* Software Modbus Poll
* Video tutorial: [YouTube Link](https://youtu.be/NAQNzf62AXQ)

*finish*