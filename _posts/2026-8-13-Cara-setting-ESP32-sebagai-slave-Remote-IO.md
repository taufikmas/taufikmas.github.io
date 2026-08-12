---
layout: post
title: "Cara setting ESP32 sebagai slave Remote IO"
excerpt: "esp32 rs485 as slave"
categories:
  - blog
tags:
  - jekyll
  - comments
  - layout
---

# Step 1 Persiapan hardware 
**ESP32**, dengan terminasi sbb:
* VCC: 5V
* GND: GND
* RX: 16
* TX: 17
* Lampu LED: 23

**Modul RS485 to TTL**, dengan terminasi sbb:
* A
* B

**USB to RS485**, dengan terminasi sbb:
* A
* B

# Step 2 Persiapan Software 
* Arduino IDE
* Modbus Poll

# Step 3 Programming Arduino IDE
1. Pilih board ESP32 dan COM serial yang aktif.
2. Upload program.

# Step 4 Testing menggunakan Modbus Poll
Kirim perintah ke Slave ESP32:
1. Hubungkan A-B modul RS485 di ESP32 ke USB to RS485.
2. Hubungkan USB to RS485 ke komputer.
3. Sesuaikan settingan COM serial, baudrate, dll, lalu konek.
4. Kirim perintah *write coil* dengan ID 10 dan address 1, pilih ON atau OFF.

---
**Resource:**
* Download program ino: [tes_esp32_modbusSlave_2.ino](https://taufikmas.github.io/assets/files/tes_esp32_modbusSlave_2.ino)
* Library modbus Arduino IDE
* Software Modbus Poll
* Video tutorial: [YouTube Link](https://youtu.be/NAQNzf62AXQ)

*finish*