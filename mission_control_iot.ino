#include <LiquidCrystal.h>

// LCD
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);

// Sensores
int tempInterna = A0;
int tempExterna = A1;
int umidade = A2;
int ldr = A3;

int tilt = 8;

// Variaveis
float temperaturaInterna;
float temperaturaExterna;

int valorUmidade;
int valorLuz;
int valorTilt;

void setup()
{
  lcd.begin(16, 2);

  pinMode(tilt, INPUT);

  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("MISSION CONTROL");

  lcd.setCursor(0, 1);
  lcd.print("INICIANDO...");

  delay(3000);

  lcd.clear();
}

void loop()
{
  
  // Leitura dos sensores

  int leituraTempInterna = analogRead(tempInterna);
  int leituraTempExterna = analogRead(tempExterna);

  temperaturaInterna =
    ((leituraTempInterna * 5.0 / 1023.0) - 0.5) * 100;

  temperaturaExterna =
    ((leituraTempExterna * 5.0 / 1023.0) - 0.5) * 100;

  valorUmidade = analogRead(umidade);

  valorUmidade = map(valorUmidade, 0, 1023, 0, 100);

  valorLuz = analogRead(ldr);

  valorLuz = map(valorLuz, 0, 1023, 0, 100);

  valorTilt = digitalRead(tilt);

  // Tela 1

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temp Int:");
  lcd.print(temperaturaInterna);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Umidade:");
  lcd.print(valorUmidade);
  lcd.print("%");

  delay(3000);

  // Tela 2

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temp Ext:");
  lcd.print(temperaturaExterna);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Luz:");
  lcd.print(valorLuz);
  lcd.print("%");

  delay(3000);

  // Tela 3

  lcd.clear();

  if (valorTilt == HIGH)
  {
    lcd.setCursor(0, 0);
    lcd.print("!!! ALERTA !!!");

    lcd.setCursor(0, 1);
    lcd.print("VIBRACAO");
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("STATUS:");

    lcd.setCursor(0, 1);
    lcd.print("ESTAVEL");
  }

  delay(3000);

  // Monitor Serial

  Serial.print("Temp Interna: ");
  Serial.print(temperaturaInterna);
  Serial.println(" C");

  Serial.print("Temp Externa: ");
  Serial.print(temperaturaExterna);
  Serial.println(" C");

  Serial.print("Umidade: ");
  Serial.print(valorUmidade);
  Serial.println("%");

  Serial.print("Luminosidade: ");
  Serial.print(valorLuz);
  Serial.println("%");

  Serial.print("Tilt: ");

  if (valorTilt == HIGH)
  {
    Serial.println("VIBRACAO");
  }
  else
  {
    Serial.println("NORMAL");
  }

  Serial.println("--------------------");
}
