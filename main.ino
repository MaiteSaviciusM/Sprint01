#include <LiquidCrystal.h>

// Define os pinos do monitor
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Define o pino do sensor de gás CO
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
}

void loop() {
  // Lê o valor do sensor de gás
  int valor = analogRead(gasSensorPin);

  // Limpa a tela do monitor
  lcd.clear();

  // Imprime o valor da variável no monitor
  lcd.print("Qntd.CO2: ");
  lcd.print(valor);

  // Espera um pouco antes de imprimir novamente
  delay(1000);
}