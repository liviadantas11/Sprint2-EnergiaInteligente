#define TENSAO A0

#define PRIORIDADE1 13
#define PRIORIDADE2 12
#define PRIORIDADE3 11
#define PRIORIDADE4 10

void setup()
{
 Serial.begin(9600);  
 pinMode(PRIORIDADE1, OUTPUT);
 pinMode(PRIORIDADE2, OUTPUT);
 pinMode(PRIORIDADE3, OUTPUT);
 pinMode(PRIORIDADE4, OUTPUT);
}

void loop()
{
  int tensao = analogRead(TENSAO);
  Serial.println(tensao);
  if (tensao <= 255){
	digitalWrite(PRIORIDADE1,HIGH);
    digitalWrite(PRIORIDADE2,LOW);
    digitalWrite(PRIORIDADE3,LOW);
    digitalWrite(PRIORIDADE4,LOW);
  }
  else if(tensao <= 510){
	digitalWrite(PRIORIDADE1,HIGH);
    digitalWrite(PRIORIDADE2,HIGH);
    digitalWrite(PRIORIDADE3,LOW);
    digitalWrite(PRIORIDADE4,LOW);

  }
  else if(tensao <= 765){
	digitalWrite(PRIORIDADE1,HIGH);
    digitalWrite(PRIORIDADE2,HIGH);
    digitalWrite(PRIORIDADE3,HIGH);
    digitalWrite(PRIORIDADE4,LOW);
  }
  else{
	digitalWrite(PRIORIDADE1,HIGH);
    digitalWrite(PRIORIDADE2,HIGH);
    digitalWrite(PRIORIDADE3,HIGH);
    digitalWrite(PRIORIDADE4,HIGH);
  }
      
  delay(500);
}