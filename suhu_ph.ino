#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>
#include <DFRobot_PH.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4);
const int sda=A4,scl=A5;
const int oneWireBusPin = 4;
OneWire oneWire(oneWireBusPin);
DallasTemperature sensors(&oneWire);
const int PO  = A0;
float Po = 0;  


void setup() {
  // put your setup code here, to run once:
      sensors.begin();
      pinMode (PO, INPUT); 
      lcd.begin(20,4);
      lcd.print("HAI");
      lcd.init();
      lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
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
  lcd.print("°C | Suhu Fahrenheit: ");
  lcd.println(fahrenheit);
  lcd.print("°F");

  delay(1000);  // Tunggu sejenak sebelum membaca suhu lag
     int nilaiPengukuranPh = analogRead(A1);
     lcd.clear();
     lcd.setCursor(0,2);
     lcd.print("Nilai ADC Ph: ");
     lcd.println(nilaiPengukuranPh);
    double TeganganPh = 5 / 1024.0 * nilaiPengukuranPh;
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,4);
    lcd.print("TeganganPh: ");
    lcd.println(TeganganPh, 3);
    lcd.print(TeganganPh);
    //Po = 7.00 + ((teganganPh7 - TeganganPh) / PhStep);
    Po = 7.00 + ((2.6 - TeganganPh) / 0.17);
    delay(1000);
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print("Nilai PH cairan: ");
    lcd.println(Po, 3);
    lcd.print(Po);
    delay(5000);
}
