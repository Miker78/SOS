/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
const int DIT_DURATION = 250;
const int DASH_DURATION = 3 * DIT_DURATION;
const int ELEMENT_PAUSE = DIT_DURATION;
const int CHARACTER_PAUSE = 3 * DIT_DURATION - ELEMENT_PAUSE;
const int WORD_PAUSE = 7 * DIT_DURATION - CHARACTER_PAUSE;


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  // Flash SOS in morse code

  morseS();
  morseO();
  morseS();
  delay(WORD_PAUSE);
}

void morseS() {
  for(int i = 1; i < 4; ++i) {
    morseDah();
  }
  delay(CHARACTER_PAUSE);
}


void morseO() {
  for(int i = 1; i < 4; ++i) {
    morseDit();
  }
  delay(CHARACTER_PAUSE);
}

void morseDit() {
  digitalWrite(13, HIGH);
  delay(DIT_DURATION);
  digitalWrite(13, LOW);
  delay(ELEMENT_PAUSE);

}

void morseDah() {
  digitalWrite(13, HIGH);
  delay(DASH_DURATION);
  digitalWrite(13, LOW);
  delay(ELEMENT_PAUSE);
}
