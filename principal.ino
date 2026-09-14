bool verificarLinhaMeio(int pino17, int pino18){
  /*
  Verifica se tem linha no meio do carrinho 

  args:

    pino17: Valor inteiro lido pelo sensor central direito (4) 1=existe ou 0=não existe
    pino18: Valor inteiro lido pelo sensor central esquerdo (5) 1=existe ou 0=não existe
  
  returns:
    booleano: se os sensores lerem linha retorna 1 se nao retorna 0   
  */
  if(pino17==0 && pino18==0){
    return false;
  }else{
    return true;
  }
}

void pararCarrinho(){
  /*
  '''
  para os motores do carrinho
  
  args: null
  returns: null
  '''
  // Logica para parar o carrinho
  */
}

void virarDireita(){
  /*
  '''
  ordena o carrinho a virar para direita

  args: null
  returns: null
  '''
  */
  // Logica para virar a direita
 }

void virarEsquerda(){
 /*
  '''
  Faz o carrinho virar para esquerda 

  args: null
  returns: null
  '''
 */
  // Logica para virar a esquerda
 }
void andarFrente(){
  /*
  '''
  Faz o carrinho mover para frente

  args: null
  returns: null
  '''
  */
  // Logica para andar para frente
 }

bool verificarLateralDireita(int blocoDireito){
  /*
  '''
  Verifica a presença de um quadrado na lateral Direita do carrinho

  args:
    blocoDireito = valor inteiro recebido do sensor na lateral direita do carrinho
  returns:
    valor booleano se está ou não percebendo um quadrado na lateral direita 
    1=sim 0=não
  
  '''
  */
  if(blocoDireito==1){
    return true;
  }else{
    return false;
  }
 }
bool verificarLateralEsquerda(int blocoEsquerdo){
  if (blocoEsquerdo == 1){
    return true;
  }else{
    return false;
  }
 }
void virarDireitaCurvaNoventa(){
  /*
  '''
  Faz o carrinho virar uma curva de 90° para direita 

  args: null
  returns: null 

  '''
  */
  // Logica para virar a direita na curva 90 graus
 }
void virarEsquerdaCurvaNoventa(){
  /*
  '''
  Faz o carrinho virar uma curva de 90° para esquerda  

  args: null
  returns: null 

  '''
  */
  // Logica para virar a esquerda na curva 90 graus

 }

const int sensores[8] = {13, 14, 16, 17, 18, 19, 21, 22};
const int leituraSensoresEsquerda[3]={};
const int leituraSensoresDireita[3]={};
const int motorDireitaTraseiro[3] = {};
const int motorDireitaDianteiro[3]={};
const int motorEsquerdaTraseiro[3]={};
const int motorEsquerdaDianteiro[3]={};
void setup() {
  Serial.begin(115200);
  while (!Serial && millis() < 3000);

  // Configura os pinos dos sensores
  for (int i = 0; i < 8; i++) {
    pinMode(sensores[i], INPUT_PULLUP);
  }
  for (int i=0;i<3;i++){

  }
}
void loop() {
  // put your main code here, to run repeatedly:
  int leituraCentroDireita = digitalRead(sensores[3]);
  int leituraCentroEsquerda = digitalRead(sensores[4]);

  // Andar para frente quando os dois pinos do meio derem 1 = preto
  if(verificarLinhaMeio(){

  }







}

















