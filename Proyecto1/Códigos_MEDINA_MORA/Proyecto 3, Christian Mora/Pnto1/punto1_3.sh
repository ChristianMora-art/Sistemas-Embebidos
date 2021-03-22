#!/bin/bash

#Christian R. Mora P.

# Se halla al pin deseado (26) con su respectiva ruta para manejarlo
echo 26 > /sys/class/gpio/export
# se define a través de "out" salida al pin gpio26 en su dirección
echo out > /sys/class/gpio/gpio26/direction
# Se establece los valores ON "1" y OFF "0" con la ruta en /value:
while true; do
	echo 1 > /sys/class/gpio/gpio26/value

	echo 0 > /sys/class/gpio/gpio26/value
done 

#echo 26 > /sys/class/gpio/unexport
