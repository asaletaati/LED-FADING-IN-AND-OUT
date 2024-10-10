int greenLED = 9;
int redLED = 10;
int brightness = 0;
int fadeamount = 25; // how many points to fade the LED by
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // set the brightness of the pins (LEDs)
  analogWrite(greenLED, brightness);
  analogWrite(redLED, brightness);
  // change the brightness
  brightness = brightness + fadeamount;
  // reversing the direction of the fading at the end of the fade
  if (brightness >= 255)
  {
    fadeamount = +fadeamount; // fade in
    delay(100);
  }
  if (brightness <= 0 )
  {
    fadeamount = -fadeamount; // fade out
    delay(100);
  }

