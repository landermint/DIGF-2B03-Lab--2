//The code here is hypothetical, assuming i have some sort of tazer or electrical shock output system
//for the picture example i used an LED

int counter = 0;

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop(){
  
  int sensorVal = digitalRead(2);
 
  if (sensorVal == LOW) {
    //count up of the connection is made
    counter++;
    delay(1);
  }
  if (counter > 10800000){ // if the user's hand has been on the mouse for 3+ hours, send the shock! Limits the amount of time people are inclined to use a computer for
    //SEND ELECTRIC SHOCK to pin 13
  }
}
