void setup()
{
  //Alle Pins als Ausgang definieren
  for(int pinnummer=0; pinnummer<19; pinnummer++)
  {
    pinMode(pinnummer, OUTPUT);
    
    //Pins ab Nummer 6 sind Zeilen
    //und müssen positiv geschaltet werden
    //die anderen Pins sind Spalten (negativ)
    digitalWrite(pinnummer, pinnummer>5);
  }
  
  //A5 und A4 sind Spalten 
  //und müssen negativ geschaltet werden
  digitalWrite(A5, LOW);
  digitalWrite(A4, LOW);
}

void loop()
{
  //leer
}

