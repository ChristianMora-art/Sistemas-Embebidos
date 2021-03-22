Punto 1.
Para este primer punto de Blink se encuentran 3 archivos, uno en C “.c” otro en Python “.py” y otro implementado en bash “.sh” para los cuales en cada código se especifica el pin GPIO designado para la operación. 

Se puede revisar el estado del pin usando el comando “apio readall”. 
La ejecución de cada programa se puede detener introduciendo desde el teclado “cmd + c” o especificando un tiempo particular en el bucle while, (por ejemplo en C: ”while ((time_time() - inicio) < 60.0)”)

Se implementaron en C y Python respectivamente las librerías wiringpi, pigpio y RPi.GPIO.

Punto 2.
Este punto requiere de la implementación del sensor de temperatura que se comunica a través del protocolo 1-Wire, el cual para facilidad de implementación circuital puede utilizarse el módulo DS18B20. 
Solo es necesario alimentarlo en lo posible a los 3.3V y tierra, y el pin de datos de salida del módulo al cualquier pin GPIO de la raspberry el cual creará una carpeta con un nombre similar a  “w1_bus_master1/28-3c01d075bc1a” en el directorio /sys/bus/w1/devices/. Así como en el primer punto, el sistema iterará recolectando los datos de temperatura cada 10 segundos y se detendrá cuando el usuario lo desee haciendo cmd + c. Hay dos implementaciones, una en python y otra en bash, las cuales generan un archivo con los datos de temperatura tomados en sus respectivos tiempos, nombrado AAAAMMDD_TEMPERATURA.csv. 

Relizado por Alejandro Medina y Christian Mora
El proyecto se encuentra en 
https://github.com/ChristianMora-art/Sistemas-Embebidos
