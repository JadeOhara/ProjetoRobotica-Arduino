//Biblioteca do display  
#include <LiquidCrystal.h>  
   
//Habilite a linha abaixo se for usar o display no modo 4 bits
//LiquidCrystal(rs, enable, d4, d5, d6, d7) 
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Modo 4 bits  
   
//Habilite a linha abaixo se for usar o display no modo 8 bits
//LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal lcd(12, 11, 9, 8, 7, 6, 5, 4, 3, 2); //Modo 8 bits  
   
//Configuracoes do LCD 16x2  
int screenWidth = 16; //Quantidade de colunas
int screenHeight = 2; //Quantidade de linhas
   
//String para as 2 linhas 
//line1 = Scroll linha superior
String line1 = "Centro Regional Universitário de Espírito Santo do Pinhal"; 
 
//line2 = Linha inferior - estatica  
String line2 = "   UNIPINHAL";  
   
//Algumas variáveis de referência 
int stringStart, stringStop = 0;  
int scrollCursor = screenWidth;  
int tamanho = 0;  
   
void setup() 
{  
  //Inicializacao do display  
  lcd.begin(screenWidth,screenHeight);  
}  
   
void loop() 
{  
  lcd.setCursor(scrollCursor, 0);  
  lcd.print(line1.substring(stringStart,stringStop));  
  lcd.setCursor(0, 1);  
  lcd.print(line2);  

  //Quanto menor o valor do delay, mais rapido o scroll  
  delay(250);  
  scroll_sup(); //Chama a rotina que executa o scroll  

  //Verifica o tamanho da string  
  tamanho = line1.length();  
  if (stringStart == tamanho)  
  {  
    stringStart = 0;  
    stringStop = 0;  
  }  
}  
   
void scroll_sup()  
{  
  lcd.clear();  
  if(stringStart == 0 && scrollCursor > 0)
  {  
    scrollCursor--;  
    stringStop++;  
  } else if (stringStart == stringStop){  
    stringStart = stringStop = 0;  
    scrollCursor = screenWidth;  
  } else if (stringStop == line1.length() && scrollCursor == 0) {  
    stringStart++;  
  } else {  
    stringStart++;  
    stringStop++;  
  }  
}  
