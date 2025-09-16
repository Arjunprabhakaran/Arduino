const int ir =7;
const int b=8;
void setup() {

 Serial.begin(9600);
pinMode(ir,INPUT);
pinMode(b,OUTPUT);

}
void loop() {

 int x=digitalRead(ir);
if(x==0){
 digitalWrite(b,HIGH);
}
else{
digitalWrite(b,LOW);
}
Serial.println(x);
delay(300);
}