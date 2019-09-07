#include <LiquidCrystal.h> 
//Declaring the Arduino digital port connected to the 1602 LCD pin, 
//8-wire or 4-wire data mode, either one
LiquidCrystal lcd(12,11,10,9,8,7,6,5,4,3,2);   
//LiquidCrystal lcd(12,11,10,5,4,3,2); 
int i;
void setup()
{
  lcd.begin(16,2);      //Initialization of 1602                 
                       //The 1602 LCD display range is defined as 2 lines and 16 columns characters
  while(1)
  {
    lcd.home();        //Moving the cursor back to the upper left corner,output from the beginning   
    lcd.print("Hello World"); 
    lcd.setCursor(0,1);   //The cursor is positioned on line 1, column 0
    lcd.print("Welcome to Yahboom-Arduino");       
    delay(500);
    for(i=0;i<3;i++)
    {
      lcd.noDisplay();
      delay(500);
      lcd.display();
      delay(500);
    }
    for(i=0;i<24;i++)
    {
      lcd.scrollDisplayLeft();
      delay(500);
    }
    lcd.clear();
    lcd.setCursor(0,0);   //Moving the cursor back to the upper left corner,output from the beginning   
    lcd.print("Hi,"); 
    lcd.setCursor(0,1);  //The cursor is positioned on line 1, column 0
    lcd.print("Arduino is fun");       
    delay(2000);
  }
}
void loop()
{}//Initialization is complete and the main loop is not need to do anythings
