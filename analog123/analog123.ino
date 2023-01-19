int ldr = 36;
int iot = 12;
 
#include<analogWrite.h>

void setup() {
Serial.begin(9600);
pinMode(iot, OUTPUT);
pinMode (ldr, INPUT);

}

void loop() {
int valuel = analogRead(ldr);
//Serial.println (valuel);
Serial.print(analogRead(ldr));
digitalWrite(iot, valuel);

}
