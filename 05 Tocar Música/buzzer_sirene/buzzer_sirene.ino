#define tempo 10
int frequencia = 0;
int PinoBuzzer = 10;

void setup()
{
  pinMode(PinoBuzzer,OUTPUT); //Pino do buzzer
}

void loop()
{
  for (frequencia = 150; frequencia < 1800; frequencia += 1) 
  {
    tone(PinoBuzzer, frequencia, tempo); 
    delay(1);
  }
  for (frequencia = 1800; frequencia > 150; frequencia -= 1) 
  {
    tone(PinoBuzzer, frequencia, tempo); 
    delay(1);
  }

}
