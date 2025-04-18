
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;    // agula LCD ar ardunio gula jog hby proteus
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16,4);
   lcd.setCursor(0,0);
  lcd.print("Tamim Ahmed");
  lcd .setCursor(0,1);
  lcd.println("Batch : Day-70");
  lcd.setCursor(0,2);
  lcd.print("Roll:15");
  lcd.setCursor(0,3);
  lcd.print("course: Periferal");
}
void loop() {

}

