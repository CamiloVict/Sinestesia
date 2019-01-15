

//Definimos el puerto del pulsador

int pulsador2 = 2;
int pulsador3 = 3;
int pulsador4 = 4;
int pulsador5 = 5;
int pulsador6 = 6;
int pulsador7 = 7;
int pulsador8 = 8;
int sooong = 13; //LED de salida para ver el estado
int mySong[] = {3, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 3, 2, 2 , 3, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 3, 2, 1, 1};
int contadorsito = 0;
int controlador = 20;

void setup() {
  pinMode(pulsador2, INPUT);
  pinMode(pulsador3, INPUT);
  pinMode(pulsador4, INPUT);
  pinMode(pulsador5, INPUT);
  pinMode(pulsador6, INPUT);
  pinMode(pulsador7, INPUT);
  pinMode(pulsador8, INPUT);
  pinMode(sooong, INPUT);
  //Declaramos el interruptor como entrada
  //digitalWrite(pulsador, HIGH); //Activamos la resistencia Pull-Up
  //pinMode(led, OUTPUT); //Declaramos el led como salida
  Serial.begin(9600);
}


void loop() {

  int estado2 = digitalRead(pulsador2);
  int estado3 = digitalRead(pulsador3);
  int estado4 = digitalRead(pulsador4);
  int estado5 = digitalRead(pulsador5);
  int estado6 = digitalRead(pulsador6);
  int estado7 = digitalRead(pulsador7);
  int estado8 = digitalRead(pulsador8); //Leemos el estado del interruptor
  int songg = digitalRead(sooong);
  if (songg == HIGH) {
   
   reproducir();
   
    
  
   // Serial.print("Hello world.");
     
  }
  if (estado2 == HIGH) {
     
    //     Serial.write(1);
    myMultiplyFunction(1);
  }
  if (estado3 == HIGH) {

    //     Serial.write(2);
    myMultiplyFunction(2);
  }
  if (estado4 == HIGH) {

    //     Serial.write(3);
    myMultiplyFunction(3);
  }
  if (estado5 == HIGH) {

    //     Serial.write(4);
    myMultiplyFunction(4);
  }
  if (estado6 == HIGH) {

    //     Serial.write(5);
    myMultiplyFunction(5);
  }
  if (estado7 == HIGH) {

    //     Serial.write(6);
    myMultiplyFunction(6);
  }
  if (estado8 == HIGH) {

    //     Serial.write(7);
    myMultiplyFunction(7);
  }
  delay(200);

}

void myMultiplyFunction(int x) {

  if (mySong[contadorsito] == x) {
    Serial.write(x);
    contadorsito++;
  } else {
    Serial.write(10);
  }


}
void reproducir() {
Serial.write(20);
contadorsito=0;
//  contadorsito=1;
}


