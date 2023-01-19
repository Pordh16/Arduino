int iot = 12;
int ntp = 15;

void setup() {
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
}

void loop() {
  iotblink();
  ntpblink(100);
}

void iotblink(void) 
//blink=กระพิบ
//ไม่รับค่าเข้าไม่ส่งค่าออก
{
  digitalWrite(iot, LOW);
  delay (500);
  digitalWrite(iot, HIGH);
  delay(500);

}
void ntpblink(int value){
  //ไม่รับค่าเข้า ไม่ส่งค่าออก
  digitalWrite(ntp, LOW);
  delay(value);
  digitalWrite(ntp, HIGH);
  delay(value);
  
  }
