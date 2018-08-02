#define D0 16
#define LED D0
void setup()  
{
  pinMode(LED,OUTPUT); 
}
void loop() 
{
 for(int i=0; i<3; i++){
  digitalWrite(LED,1);
  delay(1000);
  digitalWrite(LED,0);
  delay(1000);
    for(int i=0; i<3; i++){
  digitalWrite(LED,1);
  delay(500);
  digitalWrite(LED,0);
  delay(500);
  
}
 }
 


