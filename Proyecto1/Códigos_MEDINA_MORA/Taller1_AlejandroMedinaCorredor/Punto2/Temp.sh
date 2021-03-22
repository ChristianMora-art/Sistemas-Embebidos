#!/bin/bash

# se crea el archivo de salida en la el directorio pi
echo "Fecha Hora;Temperatura" > /home/pi/Temperatura.csv

# se capturan los datos de forma iterativa:
while true :
do
# se toman los datos de temperatura de /sys/bus/w1/devices/28-3c01d0753ed9/temperature y se operan dividiéndolos en 1000
   Temp=$(cat /sys/bus/w1/devices/28-3c01d0753ed9/temperature)
   Temp=$(echo "scale=2; $Temp/1000" | bc -l)
# se concatena (establece) como nombre del archivo de salida usando la fecha y hora y la temperatura, cada 10 segundos
   echo $(date +%Y%m%d\ %H:%M:%S)";"$Temp"°C" >> /home/pi/$(date +%Y%m%d)_TEMPERATURA.csv
   sleep  10
done
