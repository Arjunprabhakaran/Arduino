int x=0;
int pot=A0;
void setup(){

pinMode(pot,INPUT);
Serial.begin(9600);

}
void loop(){
x = analogRead(pot);
Serial.println(x);
delay(300);
}