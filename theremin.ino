/*
Adafruit Arduino - Lesson 10. Pseudo Thermin
*/
 
int speakerPin = 12;
int photocellPin = 0;
 
void setup()
{
}
 
void loop()
{
  int reading = analogRead(photocellPin);
  int pitch = 200 + reading / 4;
  tone(speakerPin, pitch);
}
/*
The sketch is actually really straightforward. 
We simply take an analog reading from A0, 
to measure the light intensity. 
This value will be in the range of something like 0 to 700.

We add 200 to this raw value, 
to make 200 Hz the lowest frequency 
and simply add the reading divided by 4 to this value, 
to give us a range of around 200Hz to 370Hz.
*/
