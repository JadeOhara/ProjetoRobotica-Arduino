//Contante referente ao pino analógico 5 que fará a leitura da antena.
int const antenaGNDPin = 5;

//Constantes referentes aos pinos dos leds que exibem a intensidade da leitura.
int const ledA = 2;
int const ledB = 3;
int const ledC = 4;
int const ledD = 5;
int const ledE = 6;

//Contante referente ao pino digital do buzzer
int const buzzer = 7;

//Variável usada para armazenar o valor lido na antena.
int valorAntena = 0;


void setup() {
  //Definindo os pinos digitais dos leds e do buzzer como de saída
  pinMode(ledA,OUTPUT);
  pinMode(ledB,OUTPUT);  
  pinMode(ledC,OUTPUT);
  pinMode(ledD,OUTPUT);  
  pinMode(ledE,OUTPUT);
  
  pinMode(buzzer,OUTPUT);
  
  //Iniciando o serial monitor
  Serial.begin(9600);  
}


void loop() { 

  //Lendo o campo eletromagnético captado pela antena que vai de 0 até 1023.
  valorAntena = analogRead(antenaGNDPin);
  
  //Apagando todos os leds 
  digitalWrite(ledA,LOW);
  digitalWrite(ledB,LOW);  
  digitalWrite(ledC,LOW);
  digitalWrite(ledD,LOW);  
  digitalWrite(ledE,LOW);  

  //Acendendo leds de acordo com a intensidade do campo eletromagnético detectado pela antena.
  if (valorAntena >= 0) {
    digitalWrite(ledA,HIGH);
  }
  
  if (valorAntena >= 30) {
    digitalWrite(ledB,HIGH);
  }
  
  if (valorAntena >= 100) {
    digitalWrite(ledC,HIGH);
  }
  
  if (valorAntena >= 200) {
    digitalWrite(ledD,HIGH);
  }
  
  if (valorAntena >= 400) {
    digitalWrite(ledE,HIGH);
    tone(buzzer,60); 
  }

  //Exibindo o valor da antena no serial monitor.
  Serial.println(valorAntena);
  delay(100);
  noTone(buzzer); 
}
