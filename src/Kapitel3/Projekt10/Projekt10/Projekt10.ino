/*
  Spielt eine Melodie
  Original Code von Tom Igoe
 */
 #include "pitches.h"

// notes in the melody:
int melody[] = { 
NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, 
NOTE_G3,0, NOTE_B3, NOTE_C4};

// Notentypen: 4 = Viertelnote, 8 = Achtelnote, etc.:
int noteDurations[] = { 4, 8, 8, 4,4,4,4,4 };

void setup() {
  // gehe die 8 Töne der Melodie einzeln durch
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // die Notenlänge ist 1 Sekunde geteilt durch
    // den Notentyp
    //z.B. Vietelnote = 1000 / 4, Achtelnote = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(11, melody[thisNote],noteDuration);

    // Pause, um Noten zu unterscheiden
    // Notenlänge + 30% scheint ein guter Wert zu sein:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // Den Ton stoppen:
    noTone(11);
  }
}

void loop() {
  //es reicht, wenn die Melodie einmal gespielt wird,
  //deswegen wiederholen wir sie hier nicht endlos
}
