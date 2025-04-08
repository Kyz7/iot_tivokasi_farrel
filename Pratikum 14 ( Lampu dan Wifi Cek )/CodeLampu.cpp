#include <Arduino.h>

int lampu1 = 19;
int lampu2 = 18;
int lampu3 = 32;

void setup() {
  pinMode(lampu1, OUTPUT);
  pinMode(lampu2, OUTPUT);
  pinMode(lampu3, OUTPUT);
}

void loop() {
  digitalWrite(lampu1, HIGH);
  delay(2000); 
  digitalWrite(lampu1, LOW);

  digitalWrite(lampu2, HIGH);
  delay(500); 
  digitalWrite(lampu2, LOW);
 
  digitalWrite(lampu3, HIGH);
  delay(2000); 
  digitalWrite(lampu3, LOW);
} 