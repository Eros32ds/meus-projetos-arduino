 #include <LiquidCrystal_I2C.h>

#include "DHT.h"

#define DHTPIN 4

#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27,16,2);

DHT dht(DHTPIN, DHTTYPE);

void setup() {

Serial.begin(9600);
dht.begin();
lcd.init();              
lcd.backlight();

}

void loop() {
 delay(2000);

  
  float h = dht.readHumidity();
  
  float t = dht.readTemperature();
  
  float f = dht.readTemperature(true);

  
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);
   
    lcd.clear();
    
  lcd.print(F("   Humidity: "));
  lcd.setCursor(5,1);
  lcd.print(h);
  lcd.print("%");
  delay(2000);
  
  lcd.clear();
  
  lcd.print(F("  Temperature: "));
  lcd.setCursor(5,1);
  lcd.print(t);
  lcd.print(F("C"));
  delay(2000);
  lcd.clear();
  
  
  lcd.print(F("  Heat index: "));
  lcd.setCursor(5,1);
  lcd.print(hic);
  lcd.print(F("C"));
  delay(2000);
}
