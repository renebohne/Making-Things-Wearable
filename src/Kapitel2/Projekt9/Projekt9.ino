/*
  Lichtsensor an Pin A3 auslesen
  Wert an Pin 10 ausgeben
 */

void setup() {         
  pinMode(5, OUTPUT);//Pin 5 als Ausgang
  pinMode(6, OUTPUT);//Pin 6 als Ausgang
  pinMode(9, OUTPUT);//Pin 9 als Ausgang
  pinMode(10, OUTPUT);//Pin 10 als Ausgang
  
  pinMode(18, OUTPUT);
  digitalWrite(18, HIGH);
  
  pinMode(16, OUTPUT);
  digitalWrite(16, LOW);
}

void loop() {
  int wert = analogRead(A3);//wert im Bereich 0..1023 von Pin A3 lesen
  wert = map(wert, 0, 1023, 0, 255);//wert umrechnen in Bereich 0..255

  analogWrite(10,wert);//wert analog ausgeben an Pin 10
  delay(5);//5ms warten schadet nicht
}



