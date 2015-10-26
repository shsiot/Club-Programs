
const int ledPin  = 13;
int flag = 0;

void setup() {
  pinMode(13, OUTPUT);   
  Serial.begin(9600);
}

void loop(){
  if(flag % 2 == 0){
    digitalWrite(ledPin, HIGH);  
  }else{
    digitalWrite(ledPin, LOW);  
  }
  flag++;
  delay(100);
}
