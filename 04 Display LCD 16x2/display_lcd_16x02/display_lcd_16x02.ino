//Biblioteca do display  
#include <LiquidCrystal.h>  
   
//Habilite a linha abaixo se for usar o display no modo 4 bits
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Modo 4 bits  
   
//Habilite a linha abaixo se for usar o display no modo 8 bits
//LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal lcd(12, 11, 9, 8, 7, 6, 5, 4, 3, 2); //Modo 8 bits  

void setup() {
  lcd.begin(16, 2); //Número das colunas e linhas do display (16x2)
  
  lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do Display
  lcd.print("Seja Bem-Vindo a"); //Escreve no LCD
  lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do Display
  lcd.print("UNIPINHAL"); //Escreve no LCD
}

void loop() {
  //Piscar o display
  lcd.noDisplay(); //Desliga o display
  delay(500);  
  lcd.display(); //Liga o display
  delay(500);
}
