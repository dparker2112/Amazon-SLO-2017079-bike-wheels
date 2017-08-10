/*OPPOSITE “SPOKES” FADE IN AND OUT
CONSECUTIVELY TO CREATE THE ILLUSION
OF COUNTER-CLOCKWISE ROTATION.
ANIMATION IS SLOW AND SUBTLE.

Connect opposite pairs of spokes on both wheels to defined PWM pins on Arduino
*/

int value, value2, value3, value4 ;
int ledpin = 3;                           // light connected to digital pin 3
int ledpin2 = 5;                          // light connected to digital pin 5
int ledpin3 = 6;                          // light connected to digital pin 6
int ledpin4 = 9;                          // light connected to digital pin 9
long time=0;

int period = 1000;
int displace = 200;

void setup()
{
 // nothing for setup
}

void loop()
{
 time = millis();
 value = 128+127*cos(2*PI/period*time);
 value2 = 128+127*cos(2*PI/period*(displace-time));
 value3 = 128+127*cos(2*PI/period*((2*displace)-time));
 value4 = 128+127*cos(2*PI/period*((3*displace)-time));
 analogWrite(ledpin, value);           // sets the value (range from 0 to 255)
 analogWrite(ledpin2, value2);         // sets the value (range from 0 to 255)
 analogWrite(ledpin3, value3);         // sets the value (range from 0 to 255)
 analogWrite(ledpin4, value4);         // sets the value (range from 0 to 255)
}
