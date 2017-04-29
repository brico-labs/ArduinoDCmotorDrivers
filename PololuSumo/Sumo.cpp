#include <Arduino.h>
#include "Sumo.h"

Sumo::Sumo(){
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void Sumo::forward(int l, int r, int t)
{
  analogWrite(9,r);
  analogWrite(10,l);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(t);
}

void Sumo::reverse(int l, int r, int t)
{
  analogWrite(9,r);
  analogWrite(10,l);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(t);
}

void Sumo::brake(int t)
{
  analogWrite(9,0);
  analogWrite(10,0);
  delay(t);
}

void Sumo::rotate(int t)
{
  analogWrite(9,100);
  analogWrite(10,100);
  if (t>0) {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  delay(abs(t));
}
