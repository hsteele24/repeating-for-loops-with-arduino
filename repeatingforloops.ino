void setup() 
{
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() 
{
 
for ( int a =2; a > 7 ; a++) // 2-6
{
  digitalWrite(a, HIGH);
  delay(250);
  digitalWrite(a, LOW);
  delay(250);
}

for ( int a = 5; a > 1 ; a--) // 5-2
{
  digitalWrite(a, HIGH);
  delay(250);
  digitalWrite(a, LOW);
  delay(250);
}

}
