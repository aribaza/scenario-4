#include <Mouse.h>

void setup() {
  Mouse.begin();
  Serial.begin(9600);
}

void loop() {
  float s1 = analogRead(A0); //click
  float s2 = analogRead(A1); //move up
  float s3 = analogRead(A2); //move down
  float s4 = analogRead(A3); //move left
  float s5 = analogRead(A4); //move right
  if (s1 > 920) {
    Mouse.click(); //click left button
  }
  if (s2 > 920) {
    Mouse.move(0,50,0); //move 50 up
  }
  if (s3 > 920) {
    Mouse.move(0,-50,0); //move 50 down
  }
  if (s4 > 920) {
    Mouse.move(-50,0,0); //move 50 left
  }
  if (s5 > 920) {
    Mouse.move(50,0,0); //move 50 right
  }
}