#include <DFRobot_PH.h>
#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);  // Alamat I2C untuk LCD 20x4
const int sda=A4,scl=A5;
const int oneWireBusPin = 4;
int analogPin = A0;  // Pin analog untuk membaca sensor pH
float pHValue = 0;   // Variabel untuk menyimpan nilai pH
OneWire oneWire(oneWireBusPin);
DallasTemperature sensors(&oneWire);

void setup() {
      lcd.begin(20, 4);  // Inisialisasi LCD
      lcd.print("HAI");
      lcd.init();
      lcd.backlight();
}

void loop() {
  sensors.requestTemperatures();  // Minta sensor untuk membaca suhu

  // Baca suhu dalam Celsius dan Fahrenheit
  float celsius = sensors.getTempCByIndex(0);
  float fahrenheit = sensors.toFahrenheit(celsius);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Suhu Celsius: ");
  lcd.print(celsius);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Suhu Fahrenheit: ");
  lcd.print(fahrenheit);
  delay(1000);
  
  pHValue = getpH();  // Mendapatkan nilai pH
  lcd.clear();  // Menghapus layar LCD
  lcd.setCursor(0, 0);
  lcd.print("pH Sensor Reading");

   lcd.setCursor(0, 1);
   lcd.print("pH Value: ");
   lcd.print(pHValue, 2);  // Menampilkan nilai pH dengan dua desimal

  delay(2000);  // Tunda 2 detik sebelum membaca pH lagi
}

float getpH() {
  int rawValue = analogRead(A0);  // Membaca nilai analog dari sensor pH
  float voltage = (rawValue / 1024.0) * 5.0;  // Mengubah nilai analog menjadi tegangan (0-5V)
  float pH = 7 - (voltage - 2.5) * 3;  // Rumus pH

  return pH;

}
