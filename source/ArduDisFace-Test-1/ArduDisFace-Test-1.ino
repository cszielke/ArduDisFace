#include <Arduino.h>
#include <U8g2lib.h>

//                        rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2          [, reset]
U8G2_KS0108_128X64_F u8g2(U8G2_R0,   8,  9, 10, 11,  4,  5,  6,  7,      2, 3,  A0,  A1, U8X8_PIN_NONE );


void setup() {
  // put your setup code here, to run once:
 u8g2.begin();
 pinMode(13,OUTPUT);
}

void loop() {
  
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0,20,"Hello World!");
  } while ( u8g2.nextPage() );
  digitalWrite(13,0);
  delay(1000);
  digitalWrite(13,1);
}

