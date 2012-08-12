int CKI = 10;//Taktleitung an Pin 10
int SDI = 11;//Datenleitung an Pin 11

void setup() {
  pinMode(SDI, OUTPUT);
  pinMode(CKI, OUTPUT);
}

void loop() 
{
  setRGB(255,0,0);//erste LED wird rot
  sendReset();
  delay(1000); 
  setRGB(0,255,0);//erste LED wird grün
  sendReset();  
  delay(1000); 
  setRGB(0,0,255);//erste LED wird blau
  sendReset();
  delay(1000); 
  
  setRGB(255,0,0);//dritte LED wird rot
  setRGB(0,255,0);//zweite LED wird grün
  setRGB(0,0,255);//erste LED wird blau
  sendReset();
  delay(1000);
 
  setRGB(0,0,0);//dritte LED aus
  setRGB(0,0,0);//zweite LED aus
  setRGB(0,0,0);//erste LED aus
  sendReset(); 
}

void setRGB(byte r, byte g, byte b)
{
  sendByte(r);
  sendByte(g);
  sendByte(b);
}

void sendByte(byte b)
{
  for(byte bitnumber=8; bitnumber>0;bitnumber--)
  {
    digitalWrite(CKI, LOW);//Taktleitung LOW  
    digitalWrite(SDI, (b & (1<<bitnumber)));//Datenleitung setzen
    digitalWrite(CKI, HIGH);//Taktleitung HIGH
  }
}

void sendReset()
{
  digitalWrite(CKI, LOW);//Taktleitung LOW  
  delayMicroseconds(500);//500us warten
}

