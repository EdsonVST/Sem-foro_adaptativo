
void fariol1(int verde5, int verde2, int verde10, int vermelho7, int vermelho4, int vermelho8, int amarelo6, int amarelo3, int amarelo9, int tempo, int valorLido1){
   int cont= 1 + cont;
     if( cont == 1){
  digitalWrite(amarelo3, HIGH);
  digitalWrite(amarelo9, HIGH);
  digitalWrite(amarelo6, LOW);
  delay(tempo);
      cont= 2; 
     }
  digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo9, LOW);
  digitalWrite(amarelo6, LOW);
  
  digitalWrite(verde5, HIGH);
	digitalWrite(verde2, LOW);
  digitalWrite(verde10, LOW);
  digitalWrite(vermelho7, LOW);
  digitalWrite(vermelho4, HIGH);
  digitalWrite(vermelho8, HIGH);
  delay(tempo);
  
  if ( valorLido1 == 0){
    cont= 0;
    digitalWrite(amarelo6, LOW);
  }
    
}

void fariol2(int verde5, int verde2, int verde10, int vermelho7, int vermelho4, int vermelho8, int amarelo6, int amarelo3, int amarelo9, int tempo, int valorLido1){
   int cont2= 1 + cont2;
     if( cont2 == 1){
fariol1(5, 2, 10, 7, 4, 8, 6, 3, 9, tempo, valorLido1);
  delay(2000);
      cont2= 2; 
     }
  digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo9, LOW);
  digitalWrite(amarelo6, LOW);
  
  digitalWrite(verde5, LOW);
	digitalWrite(verde2, HIGH);
  digitalWrite(verde10, HIGH);
  digitalWrite(vermelho7, HIGH);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho8, LOW);
  delay(tempo);
}

/*void fariol2(int verde5, int verde2, int verde10, int vermelho7, int vermelho4, int vermelho8 ){
  digitalWrite(verde5, LOW);
	digitalWrite(verde2, HIGH);
  digitalWrite(verde10, HIGH);
  digitalWrite(vermelho7, HIGH);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho8, LOW);
  delay(2000);
}*/



void cicloCompletoDeSemaforos(int valorLido,int verde5, int verde2, int verde10, int vermelho7, int vermelho4, int vermelho8, int amarelo6, int amarelo3, int amarelo9, int tempo ) {
  if(valorLido <= 0) {
    
    //fariol1(5, 2, 10, 7, 4, 8, 6, 3, 9);
    
    digitalWrite(amarelo3, HIGH);
  digitalWrite(amarelo9, HIGH);
  digitalWrite(amarelo6, LOW);
  digitalWrite(verde10, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde5, LOW);
  digitalWrite(vermelho7, HIGH); 
  digitalWrite(vermelho4, LOW); 
  digitalWrite(vermelho8, LOW); 
  delay(tempo);
    
    digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo9, LOW);
  digitalWrite(amarelo6, LOW);
  
  digitalWrite(verde5, HIGH);
	digitalWrite(verde2, LOW);
  digitalWrite(verde10, LOW);
  digitalWrite(vermelho7, LOW);
  digitalWrite(vermelho4, HIGH);
  digitalWrite(vermelho8, HIGH);
  delay(tempo);
    
     //fariol2(5, 2, 10, 7, 4, 8, 6, 3, 9);
    digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo9, LOW);
   digitalWrite(verde5, LOW);
  digitalWrite(amarelo6, HIGH);
  delay(tempo);
      
    digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo9, LOW);
  digitalWrite(amarelo6, LOW);
  
  digitalWrite(verde5, LOW);
	digitalWrite(verde2, HIGH);
  digitalWrite(verde10, HIGH);
  digitalWrite(vermelho7, HIGH);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho8, LOW);
  delay(tempo);
    
  }
}

void setup() {
  for (int i = 2; i < 14; i = i + 1) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
   Serial.begin(9600);
   Serial.begin(9600);
}

void loop() {
  int valorLido1 = analogRead(A2);
  int valorLido2 = analogRead(A3);
  int valorLido3 = analogRead(A4);
  int tempo = 5000;
  int valida;
  Serial.println(valorLido3);
  Serial.println(valorLido2);
   Serial.println(valorLido1);
  


  for (int i = 2; i < 14; i = i + 1) { // Garantir que todos estejam apagados
    digitalWrite(i, LOW);
  }
  
  
  if(valorLido1 == 0 && valorLido2 == 0 && valorLido3 == 0 ){
    if( valida == 1 ){
      digitalWrite(3, LOW);
  digitalWrite(9, LOW);
   digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
   digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
  delay(tempo);
      
    digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(5, LOW);
	digitalWrite(2, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  delay(tempo);
    }
    
      
  cicloCompletoDeSemaforos(valorLido1, 5, 2, 10, 7, 4, 8, 6, 3, 9, tempo);
  }

   if(valorLido1 > 0 && valorLido2 == 0 && valorLido3 == 0){
    fariol1(5, 2, 10, 7, 4, 8, 6, 3, 9, tempo, valorLido1);
 	valida = 1;
  }
  
  if(valorLido1 == 0 && (valorLido2 > 0 || valorLido3 > 0)){
    fariol2(5, 2, 10, 7, 4, 8, 6, 3, 9, tempo, valorLido1);
 	valida = 2;
  }
  
}
