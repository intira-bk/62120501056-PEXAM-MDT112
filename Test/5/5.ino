#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
  
  lcd.init();
  lcd.backlight();
   lcd.setCursor(4, 0);
  lcd.print("Hello MDT");
  delay(1000);
  lcd.clear();

}
void loop() 
{
 
}
