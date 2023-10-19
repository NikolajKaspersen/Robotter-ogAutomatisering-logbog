#include <Arduino.h>

// put function declarations here:
int count =0;
int buttonPin = D8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == LOW)
  {
    count++;
    Serial.println(count);
    delay(10);
    while(digitalRead(buttonPin) == LOW)
    {}
    delay(10);
  }

}
