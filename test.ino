// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
