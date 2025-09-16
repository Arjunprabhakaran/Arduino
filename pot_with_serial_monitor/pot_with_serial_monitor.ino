#include<Servo.h>
Servo s1;
int pot=A0;
int x=0;
int value;
void setup(){

pinMode(pot,INPUT);
s1.attach(7);
Serial.begin(9600);
}

void loop(){

x=analogRead(pot);

value=map(x,0,1024,0,180);
s1.write(value);

Serial.println(value);
delay(300);
}