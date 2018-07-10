#include <OLEDFourBit.h>

// see datasheet for pinouts
#define RS 12    //RegisterSelect
#define RW 10    //ReadWrite
#define E 11     //Enable
#define DB4 4    //4bit DataBus
#define DB5 5
#define DB6 6
#define DB7 7

OLEDFourBit oled(RS, RW, E, DB4, DB5, DB6, DB7);

void setup()
{
  oled.begin(20,4);
  oled.print("Hello World!");
}

void loop()
{
  oled.setCursor(0,1);
  oled.print(millis()/1000);
}

