/**************************************************************************************
 * This example tests scrolling functionality of alphanumeric displays.
 * 
 * Priyanka Makin @ SparkFun Electronics
 * Original Creation Date: February 26, 2020
 * 
 * SparkFun labored with love to create this code. Feel like supporting open source hardware?
 * Buy a board from SparkFun! LINK GOES HERE
 * 
 * This code is Lemonadeware; if you see me (or any other SparkFun employee) at the
 * local, and you've found our code helpful, please buy us a round!
 * 
 * Hardware Connections:
 * Attach Red Board to computer using micro-B USB cable.
 * Attach Qwiic Alphanumeric board to Red Board using Qwiic cable. 
 *  Don't close any of the address jumpers so that it defaults to address 0x70.
 * Attach a second Alphanumeric display using Qwiic cable.
 *  Close address jumper A0 so that this display's address become 0x71.
 * 
 * Distributed as-is; no warranty is given.
 *****************************************************************************************/
#include <SparkFun_Alphanumeric_Display.h>
HT16K33 display;

void setup() {
  Serial.begin(115200);
  Serial.println("Qwiic Alphanumeric examples");
  Wire.begin(); //Join I2C bus

  //check if displays will acknowledge
//  if (display.begin(0x70, 0x71) == false)
  if (display.begin(0x71) == false)
//  if (display.begin(0x70) == false)
  {
    Serial.println("Device did not acknowledge! Freezing.");
    while(1);
  }
  Serial.println("Displays acknowledged.");

  while(1);

//  display.print("Hello Wo");
//  delay(500);
//  while(1);
//  display.clearDisplay();
//  display.print("ello Wor");
//  delay(500);
//  display.clearDisplay();
//  display.print("llo Worl");
//  delay(500);
//  display.clearDisplay();
//  display.print("lo World");
//  delay(500);
//  display.clearDisplay();
//  display.print("o World");
//  delay(500);
//  display.clearDisplay();
//  display.print(" World");
//  delay(500);
//  display.clearDisplay();
//  display.print("World");
//  delay(500);
//  display.clearDisplay();
//  display.print("orld");
//  delay(500);
//  display.clearDisplay();
//  display.print("rld");
//  delay(500);
//  display.clearDisplay();
//  display.print("ld");
//  delay(500);
//  display.clearDisplay();
//  display.print("d");
//  delay(500);
//  display.clearDisplay();
//  display.print("");
}

void loop() {
  
}
