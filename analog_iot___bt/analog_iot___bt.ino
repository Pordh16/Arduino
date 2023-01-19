#include<analogWrite.h>
int iot = 12;
int bt = 17;

void setup() {
pinMode (iot, OUTPUT);
pinMode (bt, OUTPUT);

}

void loop() {
  for (int x = 0 ; x < 255 ;x++)
  analogWrite(iot, 0); //0-255
delay(30);
    for (int x = 255 ; x > 0 ;x--)
  analogWrite(bt, 0); //0-255
}
