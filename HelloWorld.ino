#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup()
{
	lcd.begin();
	lcd.backlight();
  lcd.clear();
  
  lcd.setCursor(0,0);
	lcd.print("Muzaffer OVUN");
  lcd.setCursor(5,1);
  lcd.print("Ogretmen");
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);lcd.print("Arda Ustaoğlu");
  lcd.setCursor(0,1);lcd.print("408 10BMP");
  delay(1500);
  lcd.clear();
 
  lcd.setCursor(0,0);lcd.print("Ismail OGUZ");
  lcd.setCursor(0,1);lcd.print("408 10BMP");
  delay(1500);
  lcd.clear();
  
  lcd.setCursor(0,0);lcd.print("Onur KONUK");
  lcd.setCursor(0,1);lcd.print("408 10BMP");
  delay(1500);
  lcd.clear();

  delay(1500);
  lcd.setCursor(0,0);lcd.print("Sicaklik:");
  lcd.setCursor(9,0);lcd.print("30");
  lcd.setCursor(0,1);lcd.print("Nem: %");
  lcd.setCursor(6,1);lcd.print("80");
  
  delay(2000);
}
