String str = "CDTI \n";
String namel1 = "Pordh";
int age = 16;
float gpa = 3.42;

void setup() {
 Serial.begin(9600);
 str += "Hello\t";
 str += "World";

 Serial.println("Name"+ namel1);
 Serial.println("Age:"+ (String)age+ "Years");
 Serial.println("GPA:"+ (String)gpa);

 
}

void loop() {
 Serial.print(str);
 delay(1000); 

}
