#include<Servo.h>
Servo p;
void setup()
{
p.attach(9);
}

void loop()
{
for(int pos=0;pos<=180;pos++){
p.write(pos);
delay(50);

}
for(int pos=180;pos>=0;pos--){
p.write(pos);
delay(50);

}
}