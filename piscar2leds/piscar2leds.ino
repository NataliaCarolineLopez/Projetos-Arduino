void setup(){
  //  Configure os pinos como saída
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop(){
  //  Pisca o LED no pino 7
  digitalWrite(7, HIGH);
  digitalWrite(8,HIGH);
  delay(1000); // espera por 1 segundo

  //  Pisca o LED no pino 8
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(1000); // espera por 1 segundo
}
