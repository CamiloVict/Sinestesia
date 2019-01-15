/*   Conexión


- Ingeniería Multimedia*/


import processing.serial.*;
import oscP5.*; // -->se importan las librerías oscP5 y netP5
import netP5.*;

OscP5 oscP5; //--> definición del objeto
NetAddress direccionRemota;

int puerto;
String ip;


Serial miPuerto;         // Crea un objeto de la clase serial
String valorString;      // Dato recibido del puerto serial en cadena de texto
int valorInt;            // Dato recibido del puerto serial en binario

void setup (){
   size(80,80);
   
    /* Conexión de Arduino a Processing: 
       Debo conocer el primer puerto serial de mi PC
       ej en MAC: 
       En computadores WINDOWS, generalmente se abre COM1.
       Abre el puerto el cual estas utilizando en tu conección. 
       Cambia el 0 a 1 o 2 etc. para hacer conexión con tu puerto.
     */
   
  String nombrePuerto = Serial.list()[1];       
  miPuerto = new Serial(this, nombrePuerto, 9600);
  
  ip = "127.0.0.1"; //-->dirección ip a donde se envían los mensajes (en este caso localhost)
puerto = 8000;

oscP5 = new OscP5(this, puerto); //-->inicialización del objeto

direccionRemota = new NetAddress(ip, puerto); //-->Entrada: mensajes de entrada por el puerto especificado
  
  
  
}



void draw(){
   
   // LECTURA DEL VALOR LEÍDO DESDE ARDUINO
   if ( miPuerto.available() > 0) 
    {                                                         /* Si el valor esta disponible */
     //valorString = miPuerto.readStringUntil('\n');            /* Lectura y almacenamiento en la variable "valor" recibiendo 'String' */
     valorInt = miPuerto.read(); 
          /* Recibiendo 'int'*/
    }else{
      valorInt = 0;
    }    
    
    println(valorInt);
    OscMessage mensaje1 = new OscMessage("/derecha_x"); //-->crea una etiqueta para el mensaje
    // Condición para reproducir el vídeo RECIBIENDO DE ARDUINO STRING
    mensaje1.add(valorInt);
    oscP5.send(mensaje1, direccionRemota);
    
}