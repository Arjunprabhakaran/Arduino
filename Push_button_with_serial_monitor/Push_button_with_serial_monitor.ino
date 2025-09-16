const int led=11;
const int button=6;
void setup(){
pinMode(led,OUTPUT);
pinMode(button,INPUT);

}
void loop()
{
int x=digitalRead(button);
if(x==0){
digitalWrite(led,LOW);

}
else{
digitalWrite(led,HIGH);

}


}