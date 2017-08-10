/*OPPOSITE “SPOKES” FADE IN AND OUT
CONSECUTIVELY TO CREATE THE ILLUSION
OF COUNTER-CLOCKWISE ROTATION.
ANIMATION IS SLOW AND SUBTLE.

Connect opposite pairs of spokes on both wheels to defined PWM pins on Arduino
*/

<<<<<<< HEAD
int value, value2, value3, value4 ;
int ledpin = 3;                           // light connected to digital pin 3
int ledpin2 = 5;                          // light connected to digital pin 5
int ledpin3 = 6;                          // light connected to digital pin 6
int ledpin4 = 9;                          // light connected to digital pin 9
long time=0;

int period = 2000;
int displace = 500;

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
=======
int Aspoke = 3;
int Bspoke = 5;
int Cspoke = 6;
int Dspoke = 9;

int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by

void setup() {
  pinMode(Aspoke, OUTPUT);
  pinMode(Bspoke, OUTPUT);
  pinMode(Cspoke, OUTPUT);
  pinMode(Dspoke, OUTPUT);
}


void loop() {
  // set the brightness of pin 11:
  analogWrite(Aspoke, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(4);

  analogWrite(Bspoke, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(4);

  analogWrite(Cspoke, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(4);

  analogWrite(Dspoke, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(4);
>>>>>>> origin/master
}
