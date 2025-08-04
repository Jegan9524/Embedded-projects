int led =5;
void setup()
{
  pinMode(led,OUTPUT);
}
void loop()
{
  for(led=5;led<=7;led++)
  {
    digitalWrite(led,HIGH);
    if(digitalRead(led)==5)
    {
   digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
    }
    else if(digitalRead(led)==6)
    {
      digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(500);
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(500);
    }
    else if(digitalRead(led)==7)
    {
      digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(250);
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(250);
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(250);

    }


    }
  
}