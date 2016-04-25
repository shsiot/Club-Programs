#include <Servo.h>

Servo myservo;
int pos = 0;
bool beingPressed = false;
const int buttonPin[] = {9,10,11,12};     // the number of the pushbutton pins

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  
  // initialize the Serial Monitor @ 9600
  Serial.begin(9600);  
  myservo.attach(13);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  // initialize the keypad pin(s) as an input:
  for(int x=0; x<4; x++)
  {
    pinMode(buttonPin[x], INPUT_PULLUP); 
  }  
}

void loop(){
  // read the state of the keypad value:
  for(int x=0; x<4; x++)
  {
    delay(1);
    //signifying the state of which the button is in by reading the appropriate pin #
    buttonState = digitalRead(buttonPin[x]);
    
    if (buttonState == LOW && buttonPin[x] == 9) {   
     beingPressed = true;
     for(pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        //delay(15);
      } 
       Serial.print("2");
    }
    if (buttonState == LOW && buttonPin[x] == 10) {
      beingPressed = true;
      for(pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        //delay(15);
      }
      Serial.print("1");
    }
    if (buttonState == LOW && buttonPin[x] == 11) {   
      beingPressed = true; 
      for(pos = 0; pos <= 180; pos -= 1) {
        myservo.write(pos);
        //delay(15);
      }
      Serial.print("4");
    }
    if (buttonState == LOW && buttonPin[x] == 12) {
      beingPressed = true;
      for(pos = 0; pos <= 180; pos -= 1) {
        myservo.write(pos);
        //delay(15);
      }
      Serial.print("3");
      //digitalWrite(ledPin, LOW);
    }
    if (beingPressed == false) {
     
    }
  }
}
