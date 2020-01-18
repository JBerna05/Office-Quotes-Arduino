#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

int dly=5000;

void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("      The");
  lcd.setCursor(0, 1);
  lcd.print("     Office");
  delay(5000);
}

void loop() 
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("That's what she");
  lcd.setCursor(0, 1);
  lcd.print("      said");
  delay(dly);
  lcd.clear();
  lcd.print(" Dunder Mifflin");
  lcd.setCursor(0, 1);
  lcd.print(" Paper Company");
  delay(dly);
  lcd.clear();
  lcd.print("   Early worm");
  lcd.setCursor(0, 1);
  lcd.print(" gets the worm");
  delay(dly);
  lcd.clear();
  lcd.print("  Ryan started");
  lcd.setCursor(0, 1);
  lcd.print("    the fire");
  delay(dly);
  lcd.clear();
  lcd.print("     I love");
  lcd.setCursor(0, 1);
  lcd.print("  Inside jokes");
  delay(dly);
  lcd.clear();
  lcd.print("    Hi, I'm");
  lcd.setCursor(0, 1);
  lcd.print("   date Mike");
  delay(dly);
  lcd.clear();
  lcd.print("  I would shoot");
  lcd.setCursor(0, 1);
  lcd.print("   Toby twice");
  delay(dly);
  lcd.clear();
  lcd.print(" Dunder Mifflin");
  lcd.setCursor(0, 1);
  lcd.print("Dog Food Company");
  delay(dly);
}
