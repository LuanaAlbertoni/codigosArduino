void setup() {
pinMode(9, INPUT); //configura o pino com o botão de entrada
pinMode(12, OUTPUT); //configura o pino com o led como saída
}

void loop() {
  if (digitalRead(9) == HIGH){ //se o botão estiver pressionado (HIGH)
    digitalWrite(12, HIGH); //acende o LED
  }
  else { //se não estiver pressionado (LOW)
     digitalWrite(12, LOW); //apaga o LED
  }
}
