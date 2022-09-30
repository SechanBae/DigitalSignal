//I Sechan Bae, 000803348 certify that this material is my original work. No other person's work has been used without due acknowledgement. I have not made my work available to anyone else."
#include <Arduino.h> 
bool buttonState=false;
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D5 as digital input - this is the pushbutton 
  pinMode(D5, INPUT_PULLUP); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 
 
} 
 
 
void loop() { 
  if(digitalRead(D5)==0){
    buttonState=!buttonState;
  }
  if(buttonState==true){
    analogWrite(D4,analogRead(A0));
  }
  else{
    digitalWrite(D4,1);
  }
  delay(300);
}