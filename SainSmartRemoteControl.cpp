/*
  remote_lvc.ino
  2013 Copyright (c) Seeed Technology Inc.  All right reserved.

  Author:Loovee
  2013-3-18

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-
  1301  USA
*/

#include "moto_4wd.h"
#include "Arduino.h"
#include <Wire.h>

bool flagGetI2C = 0;
unsigned char i2cDta[20];
unsigned char dtalen = 0;

unsigned char dirLeft 	 = 0;
unsigned char dirRight	 = 0;
unsigned char speedLeft  = 0;
unsigned char speedRight = 0;

void receiveEvent(int howMany);

/*********************************************************************************************************
** Function name:           getAnalog
** Descriptions:            read analog value
*********************************************************************************************************/
void setup()
{
    MOTOR.init();
    Serial.begin(38400);
    Serial.println("ok");
    Wire.begin(4);// join i2c bus with address #4
    Wire.onReceive(receiveEvent); // register event
}

/*********************************************************************************************************
** Function name:           getAnalog
** Descriptions:            read analog value
*********************************************************************************************************/
void loop()
{
    if(flagGetI2C)
    {
        flagGetI2C = 0;
        dtalen = 0;
        speedLeft  = i2cDta[2];
        speedRight = i2cDta[3];

		dirLeft  = speedLeft >= 0x80 ? DIRR : DIRF;
		dirRight = speedRight>= 0x80 ? DIRR : DIRF;

		dirRight = 1-dirRight;

		speedLeft  = speedLeft  & 0x7f;
		speedRight = speedRight & 0x7f;

		if(speedRight<15)
			 MOTOR.setStop2();
		else
			MOTOR.setSpeedDir2(speedRight, dirRight);
		if(speedLeft<15)
			MOTOR.setStop1();
		else
			MOTOR.setSpeedDir1(speedLeft, dirLeft);

		Serial.print("\n-------------------------------");
        Serial.print("speed_left  = ");
        Serial.println(speedLeft);
        Serial.print("speed_right = ");
        Serial.println(speedRight);
        Serial.print("-------------------------------");
    }

    delay(1);

}

/*********************************************************************************************************
** Function name:           getAnalog
** Descriptions:            read analog value
*********************************************************************************************************/
void receiveEvent(int howMany)
{
    while(0 < Wire.available()) 		// loop through all but the last
    {
        flagGetI2C = 1;
        unsigned int c = Wire.read(); 	// receive byte as a character
        Serial.print(c, DEC);         	// print the character
        Serial.print("\t");
        i2cDta[dtalen++] = c;
    }
}
/*********************************************************************************************************
 * END FILE
 *********************************************************************************************************/

