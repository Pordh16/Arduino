int x[3][4] = { {5,10,15,20}, //แถว0 คอลัม 0 1 2 3
                 {25,30,35,40}, //แถว1 คอลัม 0 1 2 3
                 {45,50,55,60} }; //แถว2 คอลัม 0 1 2 3


void setup() {
 Serial.begin(9600);
 Serial.println(x[1][2]); //เอา35 มาแสดง
 Serial.println(x[2][3]); //เอา60 มาแสดง

 for(int i=0; i<3; i++){
 for(int j=0; j<4; j++){
 Serial.print("\t"+(String)x[i][j]); 
 }
  Serial.println(); 
 }
}
 
 


void loop() {
  

}
