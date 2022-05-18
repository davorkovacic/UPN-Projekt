int b1 = 4;
int b2 = 5;
int b3 = 6;
int b4 = 7;
int LED1 = 8;
int LED2 = 9;
int Led1Stanje = 0;
int Led2Stanje = 0;
void setup(){
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(b1,INPUT);
pinMode(b2,INPUT); 
pinMode(b3,INPUT); 
pinMode(b4,INPUT);  
}
void loop() {
  if (digitalRead(b1)){
    Led1Stanje=(Led1Stanje+1)%2;
      }
  if (digitalRead(b2)){
    Led2Stanje=(Led2Stanje+1)%2;
   }
  if(digitalRead(b3)){
    Led1Stanje=0;
    Led2Stanje=0;
  }
  if(digitalRead(b4)){
    if (Led1Stanje != Led2Stanje){
      Led1Stanje=(Led1Stanje+1)%2;
      Led2Stanje=(Led2Stanje+1)%2;
    }
    }
  digitalWrite(LED1,Led1Stanje);
  digitalWrite(LED2,Led2Stanje);  
 }
