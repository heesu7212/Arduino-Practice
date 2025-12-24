#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("hello :)");
  lcd.setCursor(0,1);
  lcd.print("goodbye :(");
}
void loop(){
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}
