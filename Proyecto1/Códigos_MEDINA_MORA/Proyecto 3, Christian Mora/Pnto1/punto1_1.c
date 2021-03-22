#include <stdio.h>
#include <pigpio.h>

/*
 * Christian R. Mora P.
Download and install latest version
wget https://github.com/joan2937/pigpio/archive/master.zip
unzip master.zip
cd pigpio-master
make
sudo make install

If the Python part of the install fails it may be because you need the setup tools.

sudo apt install python-setuptools python3-setuptools 

http://abyz.me.uk/rpi/pigpio/download.html
* 
Para compilar:
 gcc -o punto1_1 punto1_1.c -lpigpio -lrt -lpthread
Correr:
 sudo ./punto1_1
*/

int main(){
	double inicio;
	
	if (gpioInitialise() < 0){
		/*fprintf(stderr, "pigpio inicialización falló\n")*/
		fprintf(stderr, "pigpio inicialización falló\n");
		return 1;
	}
	/*Establece el modo IN/OUT del GPIO (0-53) */
	gpioSetMode(17, PI_OUTPUT);  
	
	/*Comienza los servo pulsos en el GPIO*/
	gpioServo(17, 1500); /* servo en la posición central, ¿1.5 ms?*/
	
	/*comienza PWM on el GPIO, ciclos de trabajo 0(off), a trabajo 
	  completo 255, 128/255 = 50%
	 */
	gpioPWM(17, 128);
	
	inicio = time_time(); /* tiempo inicial en segundos*/
	
	while ((time_time() - inicio) < 60.0){
		gpioWrite(17, 1); /* on */
		/*time_sleep(0.5); */ 
		gpioWrite(17, 0); /* off*/
		/*time_sleep(0.5); */ 
	}
	
	gpioTerminate(); /* Termina los recursos activos de la librería */
	
	return 0;
}
