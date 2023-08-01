int motorIN1 = 14;
int motorIN2 = 13;
int motorIN3 = 12;
int motorIN4 = 15;


void setup() {
  Serial.begin(115200);
  Serial.println("");
  Serial.println("Carrinho Mil Grau Iniciando!!");

  pinMode(motorIN1, OUTPUT);
  pinMode(motorIN2, OUTPUT);
  pinMode(motorIN3, OUTPUT);
  pinMode(motorIN4, OUTPUT);

  // Parar os motores no início
}

void loop() {
  char ler;

  if (Serial.available()) {
    ler = Serial.read();  // Ler o número enviado pelo Serial
    Serial.println(ler);

    switch (ler) {
      case 'a':
        return forward();
        break;
      case 'b':
        return backward();
        break;
      case 'c':
        return stopcar();
        break;
    }
  }
}
