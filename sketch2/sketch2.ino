struct LED{
  String name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt = 17;
  };
struct LED led1,led2,led3,led4;

  int led[4] = {led1.iot, led2.ntp ,led3.wifi ,led4.bt};
  

void setup() {
  Serial.begin(9600);
  pinMode (led1.iot,OUTPUT);
  pinMode (led1.ntp,OUTPUT);
  pinMode (led1.wifi,OUTPUT);
  pinMode (led1.bt,OUTPUT);
  
  
  
}

void loop() {

  for (int i = 0 ; i < 4 ; i++){
    digitalWrite(led[i],LOW);
    delay(100);
    digitalWrite(led[i],HIGH);
    delay(100);
    }
  

  

  
  
  



}
