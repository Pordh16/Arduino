int iot = 12;
int ntp = 15;
//int wifi = 2;
#include <analogWrite.h>
void setup() {
pinMode (iot , OUTPUT);
pinMode (ntp , OUTPUT);
//pinMode (wifi , OUTPUT);
}

void loop() {
analogWrite (iot, 240); //0-255
analogWrite (ntp, 70);
//analogWrite (wifi, 200);
}
