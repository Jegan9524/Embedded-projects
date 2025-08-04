int time =1000;
void setup()
{
  for(int thispin = 3;thispin <6;thispin++)
  {
  pinMode(thispin,OUTPUT);
  }
}
void loop()
{
for(int thispin =3;thispin<6;thispin++)
{
  digitalWrite(thispin,HIGH);
  delay(time);
  digitalWrite(thispin,LOW);
  delay(time);
}
for(int thispin =5;thispin>=3;thispin--)
{
digitalWrite(thispin,HIGH);
delay(time);
digitalWrite(thispin,LOW);
delay(time);
}
}