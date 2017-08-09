/*OPPOSITE “SPOKES” FADE IN AND OUT
CONSECUTIVELY TO CREATE THE ILLUSION
OF COUNTER-CLOCKWISE ROTATION.
ANIMATION IS SLOW AND SUBTLE.

Connect opposite pairs of spokes on both wheels to defined PWM pins on Arduino
*/

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
}
