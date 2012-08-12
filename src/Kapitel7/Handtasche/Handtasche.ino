void setup()
{
  //Ausgänge
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);

  //Eingang mit Pull-Up Widerstand
  pinMode(9, INPUT);
  digitalWrite(9, HIGH);
}

void loop()
{
  digitalWrite(17, digitalRead(9));
  digitalWrite(18, digitalRead(9));
  digitalWrite(19, digitalRead(9));
}




