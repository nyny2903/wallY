//pinos de controle do motor A
const int IN1 = 2;
const int IN2 = 4;

//pinos de controle do motor B
const int IN3 = 7;
const int IN4 = 8;

//pmw
const int EN1 = 9;
const int EN2 = 10;

//sensor
const int ECHO = 12;
const int TRIG = 13;

//microservo

void setup() {
  //define todos os pinos como saída
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
}

void loop() {
  andarFrente();
  analogWrite(EN1, 90);
  analogWrite(EN2, 90);

  delay(3000);
  parar();
  delay(3000);

  andarTras();
  analogWrite(EN1, 90);
  analogWrite(EN2, 90);

  delay(3000);
  parar();
  delay(3000);

  andarDireita();

  delay(3000);
  parar();
  delay(3000);

  andarFrente();

}

//função andar para frente
void andarFrente() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

//função andar para trás
void andarTras() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

//função direita
void andarDireita(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

//função esquerda
void andarEsquerda(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

//função parar
void parar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}