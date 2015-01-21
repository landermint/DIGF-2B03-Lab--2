
int buttoncounter = 0;
int lightstate = 0;
const int buttonPin1 = 2;    


const int ledPin1 =  13;      
const int ledPin2 =  12;      
const int ledPin3 =  11;      


int buttonState1 = 0;         

void setup() {
  pinMode(ledPin1, OUTPUT);      
  pinMode(ledPin2, OUTPUT);      
  pinMode(ledPin3, OUTPUT);      

  pinMode(buttonPin1, INPUT);    
 
}

void loop(){
  buttonState1 = digitalRead(buttonPin1);

  if (buttonState1 == HIGH) {
    buttoncounter++;
  } else {
    buttoncounter = 0;
  }
  if (buttoncounter == 1){
    lightstate++;
  }
  if (lightstate == 3){
    lightstate = 0;
  }
  if (lightstate == 0){
    digitalWrite(ledPin1, HIGH);  
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW); 
    delay(100);              
    digitalWrite(ledPin1, LOW);    
    digitalWrite(ledPin2, HIGH);  
    digitalWrite(ledPin3, LOW); 
    delay(100);  
    digitalWrite(ledPin1, HIGH);  
    digitalWrite(ledPin2, HIGH); 
    digitalWrite(ledPin3, HIGH); 
    delay(100);              
    digitalWrite(ledPin1, LOW);    
    digitalWrite(ledPin2, LOW);  
    digitalWrite(ledPin3, LOW); 
    delay(1000);              

  }
    if (lightstate == 1){
    digitalWrite(ledPin1, HIGH);  
    digitalWrite(ledPin2, HIGH); 
    digitalWrite(ledPin3, HIGH); 
    delay(100);              
    digitalWrite(ledPin1, LOW);    
    digitalWrite(ledPin2, LOW);  
    digitalWrite(ledPin3, LOW); 
    delay(100);              

  }
    if (lightstate == 2){
    digitalWrite(ledPin1, HIGH);  
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW); 
    delay(100);              
    digitalWrite(ledPin1, LOW);    
    digitalWrite(ledPin2, HIGH);  
    digitalWrite(ledPin3, LOW); 
    delay(100);  
    digitalWrite(ledPin1, LOW);  
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, HIGH); 
    delay(100);              
  }
}
