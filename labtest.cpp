#include<stdio.h>
#include<SoftwareSerial.h>
int ledpin1=13,ledpin2=3;
SoftwareSerial myserial(4,5);
int state=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  Serial.begin(9600);
  Serial.println("enter tehy AT command");
  myserial.begin(38400);

}

void loop() {if(myserial.available())
    Serial.write(myserial.read());
   if(Serial.available())
    myserial.write(Serial.read());
  // put your main code here, to run repeatedly:
  if(myserial.available())
    Serial.write(myserial.read());
   if(Serial.available())
    myserial.write(Serial.read());
  if(Serial.available())
    state=Serial.read();
   if(state=='0')
   {
    digitalWrite(ledpin1,LOW);
    state=0;
   }
   else if(state=='1')
   {
    digitalWrite(ledpin1,HIGH);
    Serial.println("LED on");
    state=0;
   }
  
}
