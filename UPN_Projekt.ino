int b1 = 4;
int b2 = 5;
int b3 = 6;
int b4 = 7;
int LED1 = 8;
int LED2 = 9;
void setup() {
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(b1,INPUT);
pinMode(b2,INPUT); 
pinMode(b3,INPUT); 
pinMode(b4,INPUT);  
}
void loop() {
  if (digitalRead(b1)==1){
      digitalWrite(LED1,0);
      digitalWrite(LED2,1);
      }
  if (digitalRead(b2) == 1){
    digitalWrite(LED2,0);
    digitalWrite(LED1,1);
   }
  if(digitalRead(b3)== 1){
    digitalWrite(LED2,0);
    digitalWrite(LED1,0);
  }
  if(digitalRead(b4)== 1){
    if(digitalRead(LED1)==1){
      digitalWrite(LED1,0);
      digitalWrite(LED2,1);
    }else{
      digitalWrite(LED1,1);
      digitalWrite(LED2,0);
    }
  }
}
