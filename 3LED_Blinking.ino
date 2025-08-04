int LED_R= 10;
int LED_Y=9;
int LED_G=8;
void setup()
{
  pinMode(LED_R,OUTPUT);
  pinMode(LED_Y,OUTPUT);
  pinMode(LED_G,OUTPUT);

}
void loop()
{
  digitalWrite(LED_R,HIGH);
  delay(1000);
  digitalWrite(LED_R,LOW);
  delay(1000);
  digitalWrite(LED_Y,HIGH);
  delay(1000);
  digitalWrite(LED_Y,LOW);
  delay(1000);
  digitalWrite(LED_G,HIGH);
  delay(1000);
  digitalWrite(LED_G,LOW);
  delay(1000);
}