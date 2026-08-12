#include <ModbusRTUSlave.h>
#include "ModbusADU.h"
// Konfigurasi Pin Hardware
const int pinRX = 16;        // Hubungkan ke RO MAX485
const int pinTX = 17;        // Hubungkan ke DI MAX485
const int pinDERe = 4;       // Hubungkan ke DE dan RE MAX485 ke pin 4
const int pinRelay = 23; //active LOW;     // Pin yang terhubung ke modul relay

// Parameter Modbus
const byte SLAVE_ID = 10;    // ID Slave sesuai permintaan
const long BAUD_RATE = 9600; // Kecepatan baud rate standar industri

// Jumlah Coil yang digunakan (Coil 0 dan Coil 1)
// Karena perintah yang diminta "Write Coil 1", kita sediakan array minimal 2 coil (Indeks 0 dan 1)
const uint16_t numCoils = 2;
bool coils[numCoils];

// Menggunakan Serial2 pada ESP32
//ModbusRTUSlave modbus(Serial2, pinDERe);
ModbusRTUSlave modbus(Serial2);

void setup() {
  // Inisialisasi Serial Monitor untuk debugging (opsional)
  Serial.begin(115200);

  // Inisialisasi Pin Relay sebagai Output
  pinMode(pinRelay, OUTPUT);
  digitalWrite(pinRelay, HIGH); // Kondisi awal relay OFF

  // Inisialisasi Serial2 untuk komunikasi RS485
  Serial2.begin(BAUD_RATE, SERIAL_8N1, pinRX, pinTX);

  // Konfigurasi dan mulai Modbus RTU Slave
  modbus.begin(SLAVE_ID, BAUD_RATE, SERIAL_8N1);
  
  // Konfigurasi data coils yang akan dipantau oleh Modbus
  modbus.configureCoils(coils, numCoils);

  Serial.println("ESP32 Modbus RTU Slave Siap (ID: 10)");
}

void loop() {
  // Poll secara terus-menerus untuk menerima dan memproses request dari Master
  modbus.poll();

  // Memetakan status Coil 1 ke Relay fisik
  // Catatan: Coil 1 secara indeks array adalah coils[1] (Alamat Modbus/Protocol address: 0002 jika 1-based, atau 0001 tergantung master)
  // Jika Master menulis ke Coil 1 (index 1):
  digitalWrite(pinRelay, coils[1] ? LOW : HIGH);

  // Jika Anda ingin Coil 0 yang mengontrol relay utama, ubah 'coils[1]' menjadi 'coils[0]'
}