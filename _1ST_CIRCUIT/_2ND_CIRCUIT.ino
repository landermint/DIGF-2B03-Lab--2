
const int buttonPin1 = 2;     
const int buttonPin2 = 3;     
const int buttonPin3 = 4;     


const int ledPin =  13;    

int buttonState1 = 0;         
int buttonState2 = 0;         
int buttonState3 = 0;         

void setup() {
  pinMode(ledPin, OUTPUT);     
  
  pinMode(buttonPin1, INPUT);    
  pinMode(buttonPin2, INPUT);     
  pinMode(buttonPin3, INPUT);     
 
}

void loop(){
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 == HIGH) {
    digitalWrite(ledPin, HIGH);   
    delay(100);            
    digitalWrite(ledPin, LOW);    
    delay(100);  
   
  } 
  else if (buttonState1 == LOW){
    digitalWrite(ledPin, LOW); 
  }
  //////////////
  if (buttonState2 == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else if (buttonState2 == LOW){
    digitalWrite(ledPin, LOW); 
  }
  ////////////////
  if (buttonState3 == HIGH) {     
    digitalWrite(ledPin, HIGH);   
    delay(500);             
    digitalWrite(ledPin, LOW);    
    delay(100);  
    digitalWrite(ledPin, HIGH);   
    delay(50);
    digitalWrite(ledPin, LOW);    
    delay(100);  
  } 
  else if (buttonState3 == LOW){
    digitalWrite(ledPin, LOW); 
  }
}
