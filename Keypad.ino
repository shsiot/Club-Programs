// set pin numbers:
const int buttonPin[] = {9,10,11,12};     // the number of the pushbutton pins


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  
  // initialize the Serial Monitor @ 9600
  Serial.begin(9600);  
  
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

    // check if the pushbutton on the keypad is pressed.
    // if it is, the buttonState is LOW:
    /*if(buttonState == LOW){
      digitalWrite(buttonPin[x]-5, !digitalRead(buttonPin[x]-5));

      Serial.print("");
      delay(200);
    }*/
    
    if (buttonState == LOW && buttonPin[x] == 9) {    
       digitalWrite(5, !digitalRead(5));
      Serial.print("2");
      
    }
    if (buttonState == LOW && buttonPin[x] == 10) {
      // turn LED off:
      digitalWrite(4, !digitalRead(4));
      Serial.print("1");
      
    }
    if (buttonState == LOW && buttonPin[x] == 11) {    
      // turn LED off:   
      digitalWrite(7, !digitalRead(7));
      Serial.print("4");
      // digitalWrite(ledPin, LOW); 
    }
    if (buttonState == LOW && buttonPin[x] == 12) {
      // turn LED off:
      digitalWrite(6, !digitalRead(6));
      Serial.print("3");
      //digitalWrite(ledPin, LOW);
    }
  }
}
