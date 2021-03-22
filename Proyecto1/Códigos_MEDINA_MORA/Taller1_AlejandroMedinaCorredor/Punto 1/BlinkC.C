#include <wiringPi.h>

// se establece el pin GPIO 17 como el de uso
const int PIN = 17;
int main (void)
{
//inicializa wiringpi y asume que el programa al llamarlo usara el esquema numérico del GPIO,
  wiringPiSetupGpio();
//se asigna al pin 17 como de salida
  pinMode (PIN, OUTPUT);
//bucle infinito usando for con argumento de entrada ";;"
  for (;;) 
  {
//se sube y baja el pin de salida 17 con HIGH y LOW. 
    digitalWrite (PIN, HIGH) ; //delay (500) ;
    digitalWrite (PIN,  LOW) ; //delay (500) ;
  }
  return 0 ;
}