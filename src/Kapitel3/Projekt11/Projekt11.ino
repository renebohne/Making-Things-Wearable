int analogpin = 3;//Pin A3 ist Signalpin des Sensors
int null_grad_celsius = 128;//128 bei 4V, 102 bei 5V

void setup()
{
  //LEDs
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(18, OUTPUT);
  digitalWrite(18, HIGH);//Pluspol für Sensor
  pinMode(16, OUTPUT);
  digitalWrite(16, HIGH);//Minuspol für Sensor
}

void loop()
{
  int adc = analogRead(analogpin);
  int c = (adc - null_grad_celsius)/2;

  digitalWrite(5, LOW);//LED 5 aus
  digitalWrite(6, LOW);//LED 6 aus
  digitalWrite(9, LOW);//LED 9 aus
  digitalWrite(10, LOW);//LED 10 aus

  if(c>10)//wenn Temperatur grösser als 10 Grad C 
  {
    digitalWrite(5, HIGH);//LED 5 an
  }
  if(c>20)//wenn Temperatur grösser als 20 Grad C 
  {
    digitalWrite(6, HIGH);//LED 5 und 6 an
  }
  if(c>25)//wenn Temperatur grösser als 25 Grad C 
  {
    digitalWrite(9, HIGH);//LED 5, 6 und 9 an
  }
  if(c>30)//wenn Temperatur grösser als 30 Grad C 
  {
    digitalWrite(10, HIGH);//alle LEDs an
  }
  delay(5);//kurze Pause
}



