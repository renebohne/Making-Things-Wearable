int xPin = 2;//X-Achse wird an Pin A2 ausgelesen
//gemessene Sensorwerte
int x_min = 450;//der kleinste Wert
int x_mitte = 550;//der mittlere Wert
int x_max = 580;//der grösste Wert

void setup(){
  pinMode(5, OUTPUT);//Pin 5 als Ausgang
  pinMode(6, OUTPUT);//Pin 6 als Ausgang
  pinMode(9, OUTPUT);//Pin 9 als Ausgang
  pinMode(10, OUTPUT);//Pin 10 als Ausgang
  pinMode(11, OUTPUT);//Pluspol
  digitalWrite(11, HIGH);//Pluspol
  Serial.begin(9600);//Kommunikation starten
}

void loop(){
  //LEDs aus schalten
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  int x = analogRead(xPin);//analogen Wert auslesen

  if(x>x_max)//wenn Messwert grösser als Maximalwert
  {
    digitalWrite(10, HIGH);
  }
  else if(x>x_mitte)//wenn Messwert grösser als mittlerer Wert
  {
    digitalWrite(9, HIGH);
  }
  else if(x>x_min)////wenn Messwert grösser als Minimum
  {
    digitalWrite(6, HIGH);
  }
  else//wenn Messwert kleiner als Minimum
  {
    digitalWrite(5, HIGH);
  }
  delay(500);//Etwas Pause machen...
  Serial.println(x);
}









