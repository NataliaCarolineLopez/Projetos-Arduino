//Programa que envia sinal alto para a saída 7,
//aguarda 1 segundo e envia sinal baixo para a saída 7
void setup() {
  // put your setup code here, to run once:
  //  porta configurada como saída

  pinMode(7,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //  envia sinal alto
  digitalWrite(7,HIGH);
  delay(1000);
  //  envia sinal baixo
  digitalWrite(7,LOW);
  delay(1000);

}
