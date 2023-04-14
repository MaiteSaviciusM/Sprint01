#include <LiquidCrystal.h>

// Define os pinos do monitor
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define o pino do sensor de gás
const int gasSensorPin = A5;

void setup() {
  // Inicializa o monitor com o número de colunas e linhas
  lcd.begin(16, 2);

  // Imprime uma mensagem de inicialização
  lcd.print("Inicializando...");

  // Espera um pouco para dar tempo ao monitor de se ajustar
  delay(1000);

  // Limpa a tela do monitor
  lcd.clear();

  // Imprime uma mensagem de boas-vindas
  lcd.print("Bem-vindo!");
}

void loop() {
  // Lê o valor do sensor de gás
  int valor = analogRead(gasSensorPin);

  // Limpa a tela do monitor
  lcd.clear();

  //Se a leitura for maior que 90 VOCS (Unidade de medida para qntdd de particulas CO no ar) ela tem um alto indice de poluição.
  if (valor > 90){
    lcd.setCursor(2, 0);
    lcd.print("Mto. Poluido"); 
    lcd.setCursor(0, 1);
    lcd.print("Qntd.CO:");
  	lcd.print(valor);
  	lcd.print(" VOCs");  
  }
  else if (valor > 45){
  	lcd.setCursor(2, 0);
    lcd.print("Pouco Poluido"); 
    lcd.setCursor(1, 1);
    lcd.print("Qntd.CO:");
  	lcd.print(valor);
  	lcd.print(" VOCs"); 
  }   
  else {
    lcd.setCursor(5, 0);
    lcd.print("Limpo"); 
    lcd.setCursor(0, 1);
    lcd.print("Qntd.CO:");
  	lcd.print(valor);
  	lcd.print(" VOCs"); 
  }
      
       

  
      
  // Espera 3 secs antes de imprimir novamente
  delay(3000);
}
