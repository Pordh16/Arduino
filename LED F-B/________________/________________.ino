int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
const int s1 = 16;
const int s2 = 14;

void setup(){

pinMode(bt, OUTPUT);
pinMode(wifi, OUTPUT);
pinMode(ntp, OUTPUT);
pinMode(iot, OUTPUT);
pinMode(s1, INPUT_PULLUP);
pinMode(s2, INPUT_PULLUP);
digitalWrite(bt, HIGH);
digitalWrite(wifi, HIGH);
digitalWrite(ntp, HIGH);
digitalWrite(iot, HIGH);

}

void loop(){
if (digitalRead(s1) == LOW) 
  {
  forward();
  }
  else if (digitalRead(s2) == LOW)
  {
    backward();
  }else{
    stopped();
  }

 
}



void stopped1(){
digitalWrite(bt,LOW);
digitalWrite(wifi,LOW);
digitalWrite(ntp,LOW);
digitalWrite(iot,LOW);
}

void forward(){  //เรียกใช้งาน
digitalWrite(bt,LOW);
digitalWrite(wifi,HIGH);
digitalWrite(ntp,LOW);
digitalWrite(iot,HIGH);
 }
void backward(){
digitalWrite(bt,HIGH);
digitalWrite(wifi,LOW);
digitalWrite(ntp,HIGH);
digitalWrite(iot,LOW);
}


void right(){
digitalWrite(bt,HIGH);
digitalWrite(wifi,LOW);
digitalWrite(ntp,LOW);
digitalWrite(iot,HIGH);
}


void lift(){
digitalWrite(bt,LOW);
digitalWrite(wifi,HIGH);
digitalWrite(ntp,HIGH);
digitalWrite(iot,LOW);
}


void stopped(){
digitalWrite(bt,HIGH);
digitalWrite(wifi,HIGH);
digitalWrite(ntp,HIGH);
digitalWrite(iot,HIGH);


}
