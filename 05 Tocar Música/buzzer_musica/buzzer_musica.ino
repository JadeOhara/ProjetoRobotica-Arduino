//Biblioteca das notas musicais
#include "pitches.h"

void setup() 
{
pinMode(10,OUTPUT); //Pino do buzzer
}

void loop()
{
    delay(2000);
    //tone(pino,frequencia,duração)
    tone(10,NOTE_C4,200); //DO4
    delay(200); //silêncio
    tone(10,NOTE_D4,300); //RE4
    delay(200);
    tone(10,NOTE_E4,300); //MI4
    delay(200);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
    tone(10,NOTE_C4,100); //DO4
    delay(200);
    tone(10,NOTE_D4,300); //RE4
    delay(200);   
    tone(10,NOTE_C4,100); //DO4
    delay(200);
    tone(10,NOTE_D4,300); //RE4
    delay(300);
    tone(10,NOTE_D4,300); //RE4
    delay(300);
    tone(10,NOTE_D4,300); //RE4
    delay(300);
    tone(10,NOTE_C4,200); //DO4
    delay(200);
    tone(10,NOTE_G4,200); //SOL4
    delay(200);
    tone(10,NOTE_F4,200); //FA4
    delay(200);
    tone(10,NOTE_E4,300); //MI4
    delay(300);
    tone(10,NOTE_E4,300); //MI4
    delay(300);
    tone(10,NOTE_E4,300); //MI4
    delay(300);
    tone(10,NOTE_C4,200); //DO4
    delay(200);
    tone(10,NOTE_D4,300); //RE4
    delay(200);
    tone(10,NOTE_E4,300); //MI4
    delay(200);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
    tone(10,NOTE_F4,300); //FA4
    delay(300);
}
