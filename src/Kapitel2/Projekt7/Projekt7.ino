/*
  Lauflicht mit LEDs an Pin 5,6,9,10
 wenn Taster an Pin 19 (A5) gedrückt ist
 */

void setup() {      
  pinMode(5, OUTPUT);//Pin 5 als Ausgang
  pinMode(6, OUTPUT);//Pin 6 als Ausgang
  pinMode(9, OUTPUT);//Pin 9 als Ausgang
  pinMode(10, OUTPUT);//Pin 10 als Ausgang
  
  pinMode(19,INPUT);//Pin 19 (A5) als Eingang 
  digitalWrite(19, HIGH);//Pull-Up Widerstand aktivieren
}

void loop() {
  if(digitalRead(19) == LOW)//wenn Schalter gedrückt ist
  {
    digitalWrite(5, HIGH);   // LED 5 an
    delay(50);              // warte 50ms
    digitalWrite(5, LOW);  // LED 5 aus
    delay(50);              // warte 50ms

    digitalWrite(6, HIGH);   // LED 6 an
    delay(50);              // warte 50ms
    digitalWrite(6, LOW);  // LED 6 aus
    delay(50);              // warte 50ms

    digitalWrite(9, HIGH);   // LED 9 an
    delay(50);              // warte 50ms
    digitalWrite(9, LOW);  // LED 9 aus
    delay(50);              // warte 50ms

    digitalWrite(10, HIGH);  // LED 10 an
    delay(50);              // warte 50ms
    digitalWrite(10, LOW); // LED 10 aus
    delay(50);              // warte 50ms
  }
}



