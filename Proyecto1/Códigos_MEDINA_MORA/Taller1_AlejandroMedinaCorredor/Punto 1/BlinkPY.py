import RPi.GPIO as GPIO    # Importar Librerias
import time    

GPIO.setmode(GPIO.BOARD)   # Usar numero de pin Fisico
GPIO.setup(11, GPIO.OUT, initial=GPIO.LOW)   # Inizialización pin fisico

while 1: 
    GPIO.output(11, GPIO.HIGH) # ON
    #time.sleep(1)                  # Retardo 1 segundo
    GPIO.output(11, GPIO.LOW)  # OFF
    #time.sleep(1)                  # Retardo 1 segundo