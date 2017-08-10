/*OPPOSITE “SPOKES” FADE IN AND OUT
CONSECUTIVELY TO CREATE THE ILLUSION
OF COUNTER-CLOCKWISE ROTATION.
ANIMATION IS SLOW AND SUBTLE.

Connect opposite pairs of spokes on both wheels to defined PWM pins on Arduino
*/

#define ASPOKE 3
#define BSPOKE 5
#define CSPOKE 6
#define DSPOKE 9

#define FADESPEED 5     // make this higher to slow down

void setup() {
  pinMode(ASPOKE, OUTPUT);
  pinMode(BSPOKE, OUTPUT);
  pinMode(CSPOKE, OUTPUT);
  pinMode(DSPOKE, OUTPUT);
}


void loop() {
  int b;

  // fade A spoke up
  for (b = 0; b < 256; b++) {
    analogWrite(ASPOKE, b);
    delay(FADESPEED);
  }
  // fade  A spoke down
  for (b = 255; b > 0; b--) {
    analogWrite(ASPOKE, b);
    delay(FADESPEED);
  }
  for (b = 0; b < 256; b++) {
    analogWrite(BSPOKE, b);
    delay(FADESPEED);
  }
  // fade  A spoke down
  for (b = 255; b > 0; b--) {
    analogWrite(BSPOKE, b);
    delay(FADESPEED);
  }
  for (b = 0; b < 256; b++) {
    analogWrite(CSPOKE, b);
    delay(FADESPEED);
  }
  // fade  A spoke down
  for (b = 255; b > 0; b--) {
    analogWrite(CSPOKE, b);
    delay(FADESPEED);
  }
  for (b = 0; b < 256; b++) {
    analogWrite(DSPOKE, b);
    delay(FADESPEED);
  }
  // fade  A spoke down
  for (b = 255; b > 0; b--) {
    analogWrite(DSPOKE, b);
    delay(FADESPEED);
  }

}
