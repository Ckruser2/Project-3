int d = 5;
void setup()
{
  pinMode(3, OUTPUT);// LED control pin is 3, a PWM-capable pin
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);  
}
 
void loop()
{
  for ( int a = 0 ; a < 256 ; a++ )
{
  analogWrite(3, a);
  analogWrite(5, a);
  analogWrite(6, a);
  analogWrite(9, a);
  analogWrite(10, a);
  delay(d);
}
  for ( int a = 255 ; a >= 0 ; a-- )
{
  analogWrite(3, a);
  analogWrite(5, a);
  analogWrite(6, a);
  analogWrite(9, a);
  analogWrite(10, a);
  delay(d);
}
  delay(200);
}