#define A0 0
#define Soil A0

#define D0 16
#define Buzzer D0

int red = 5;
int green = 4;
int blue = 0;

void setup (){
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(Buzzer,OUTPUT);
}

void loop()
{
  int A = analogRead(Soil);
  int value = map(A, 0, 1023, 100, 0);
  Serial.print("Value : ");
  Serial.print(value);
  Serial.println("%");

  if(value < 75){
    one();
    }
  if (value < 75 && value > 80){
    two();
  }
  if (value > 80){
    three ();
  }
}
  


void three(){
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);

  digitalWrite(Buzzer,HIGH);
  delay(350);
  digitalWrite(Buzzer,LOW);
  delay(350); 
}

void two(){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);

  digitalWrite(Buzzer,HIGH);
  delay(700);
  digitalWrite(Buzzer,LOW);
  delay(700);
}

void one(){
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);

  digitalWrite(Buzzer,HIGH);
  delay(1500);
  digitalWrite(Buzzer,LOW);
  delay(1500);
}



    


