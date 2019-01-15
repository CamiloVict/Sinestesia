

//Definimos el puerto del pulsador

int pulsador2 = 2;
int pulsador3 = 3;
int pulsador4 = 4;
int pulsador5 = 5;
int pulsador6 = 6;
int pulsador7 = 7;
int pulsador8 = 8;
int led = 13; //LED de salida para ver el estado

void setup(){
pinMode(pulsador2, INPUT);
pinMode(pulsador3, INPUT);
pinMode(pulsador4, INPUT);
pinMode(pulsador5, INPUT);
pinMode(pulsador6, INPUT);
pinMode(pulsador7, INPUT);
pinMode(pulsador8, INPUT);
//Declaramos el interruptor como entrada
//digitalWrite(pulsador, HIGH); //Activamos la resistencia Pull-Up
pinMode(led, OUTPUT); //Declaramos el led como salida
Serial.begin(9600);
}


void loop(){

int estado2 = digitalRead(pulsador2);
int estado3 = digitalRead(pulsador3); 
int estado4 = digitalRead(pulsador4); 
int estado5 = digitalRead(pulsador5); 
int estado6 = digitalRead(pulsador6); 
int estado7 = digitalRead(pulsador7); 
int estado8 = digitalRead(pulsador8); //Leemos el estado del interruptor
  
  if(estado2 == HIGH){
     digitalWrite(led, HIGH); //Apagamos el LED
     //Serial.println("suelta");
     Serial.write(1);
     estado2 = LOW;
     }
  else{
    
    digitalWrite(led, LOW); //Encendemos el LED
     //Serial.println("suelta");
  }
  if(estado3 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(2);
    }else{
      digitalWrite(led, LOW);
      }
       if(estado4 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(3);
    }else{
      digitalWrite(led, LOW);
      }
       if(estado5 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(4);
    }else{
      digitalWrite(led, LOW);
      }
       if(estado6 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(5);
    }else{
      digitalWrite(led, LOW);
      }
       if(estado7 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(6);
    }else{
      digitalWrite(led, LOW);
      }
       if(estado8 == HIGH){
     digitalWrite(led, HIGH);
     Serial.write(7);
    }else{
      digitalWrite(led, LOW);
      }
}

