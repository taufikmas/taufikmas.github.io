---
layout: post
title:  "Cara setting ESP32 sebagai slave Remote IO"
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
VCC : 5V
GND
RX:16
TX:17
Lampu LED:23
**Modul RS485 to TTL**, dengan terminasi sbb:
A
B
**USB to RS485**, dengan terminasi sbb:
A
B
# Step 2 Persiapan Software 
**+arduino IDE**
**+modbus Poll**

# Step 3 programming arduino IDE
### 1. piliha esp32 dan com serial yang aktif.
### 2. upload program.


# Step 4 Testing menggunakan Modb poll kirim perintah ke Slave ESP32
### 1. Hubungkan A-B modul RS485 di ESP32 ke USB to RS485
### 2. Hubungkan USB to RS485 ke komputer
### 3. sesuaikan settingan com serial baudrate dll, konek
### 4. kirim perintah write coil dengan ID 10 dan address 1, pilh ON atau OFF.


download 
+ program ino `https://taufikmas.github.io/assets/files/tes_esp32_modbusSlave_2.ino`.
+ library modbus arduino IDE
+ software modb poll
video tutorial `https://youtu.be/NAQNzf62AXQ`
*finish*