/*
 LEDs dimmen
 faded zwischen LEDs an Pin 9 und 10 hin und her
 */

void setup() {         
  pinMode(5, OUTPUT);//Pin 5 als Ausgang
  pinMode(6, OUTPUT);//Pin 6 als Ausgang
  pinMode(9, OUTPUT);//Pin 9 als Ausgang
  pinMode(10, OUTPUT);//Pin 10 als Ausgang
}

void loop() {
  for(int z=0; z<256;z++)
  {
    analogWrite(9, z);//LED an Pin 9 wird heller
    analogWrite(10, 255-z);//LED an Pin 9 wird dunkler
    delay(5);
  }
  for(int z=0; z<256;z++)
  {
    analogWrite(9, 255-z);//LED an Pin 9 wird dunkler
    analogWrite(10, z);//LED an Pin 10 wird heller
    delay(5);
  }
}



