/*
  LED an Pin 5 blinkt
 */

void setup() {                
  // Pin 5 als Ausgang definieren
  pinMode(5, OUTPUT);     
}

void loop() {
  digitalWrite(5, HIGH);    // LED an
  delay(1000);              // warte 1 Sekunde
  digitalWrite(5, LOW);     // LED aus
  delay(1000);              // warte 1 Sekunde
}
