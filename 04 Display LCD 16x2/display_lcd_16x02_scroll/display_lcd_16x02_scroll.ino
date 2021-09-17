//Biblioteca do display  
#include <LiquidCrystal.h>  
   
//Habilite a linha abaixo se for usar o display no modo 4 bits
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Modo 4 bits  
   
//Habilite a linha abaixo se for usar o display no modo 8 bits
//LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal lcd(12, 11, 9, 8, 7, 6, 5, 4, 3, 2); //Modo 8 bits  

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("UNIPINHAL!!!!");
  delay(1000);
}

void loop() {
  //Rolar 13 posicoes (tamanho da string) para a esquerda
  //Mover para a esquerda
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    //Rolar uma posição para a esquerda
    lcd.scrollDisplayLeft();
    //Pequena pausa
    delay(150);
  }

  //Rolar 29 posicoes (tamanho da string + tamanho do display) para a direita
  //Mover para a direita
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    //Rolar uma posição para a direita
    lcd.scrollDisplayRight();
    //Pequena pausa
    delay(150);
  }

  //Rolar 16 posicoes (tamanho do display + tamanho da string) para a esquerda
  //Mover string de volta pro centro
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    //Rolar uma posição para a esquerda
    lcd.scrollDisplayLeft();
    //Pequena pausa
    delay(150);
  }

  //Pausa no final do loop
  delay(1000);
}
