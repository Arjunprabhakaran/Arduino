const int ldr = 7;
const int buzz = 6;
void setup() {
pinMode(ldr,INPUT);
pinMode(buzz,OUTPUT);
}
void loop() {
 int x = digitalRead(ldr);
if(x==0){
digitalWrite(buzz,HIGH);
}
else{
digitalWrite(buzz,LOW);
}
}