const int ir =7;
void setup() {  
Serial.begin(9600);
pinMode(ir,INPUT);
}

void loop() {  
int x=digitalRead(ir);
Serial.println(x);
delay(300);
}