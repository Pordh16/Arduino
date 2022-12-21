int sw1 = 16;
int sw2 = 14;
int iot = 12;
int ntp = 15;
char key;

void setup() {
 Serial.begin(9000);
 pinMode(sw1,INPUT);
 pinMode(sw2,INPUT);
 pinMode(iot,OUTPUT);
 pinMode(ntp,OUTPUT);

}

void loop() {
key = Serial.read();
Serial.println(key);
delay(10);
switch (key){
  case ('a'): digitalWrite(iot, HIGH);
              Serial.println("IOT ON");
              delay(5000);
            break;
  case ('b'): digitalWrite(iot, HIGH);
              digitalWrite(iot, HIGH);
              Serial.println("IOT ON");
            break;
           
  default: digitalWrite(iot, LOW);
           digitalWrite(ntp, LOW);
           Serial.println("OFF ALL");
            
}


}
