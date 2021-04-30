#include <wiringPi.h>

const int PIN = 17;
const float Del = 2.5;

int main (void)
{

  wiringPiSetupGpio() ;
  pinMode (PIN, OUTPUT) ;
  for (;;)
  {
    digitalWrite (PIN, HIGH) ; udelay (Del) ;
    digitalWrite (PIN,  LOW) ; udelay (Del) ;
  }
  return 0 ;
}
