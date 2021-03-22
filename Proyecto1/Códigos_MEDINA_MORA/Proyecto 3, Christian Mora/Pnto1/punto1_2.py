import RPi.GPIO as GPIO

#Christian R. Mora P.
#se específica la referencia de los GPIO por el nombre del GPIO y no el pin físico "GPIO.BCM"
GPIO.setmode(GPIO.BCM)
#Se establece el pin 17 como de salida
GPIO.setup(17, GPIO.OUT)

#Se hace un bucle infinito en un try que al salir, avisa que se ha salido usando 'cmd c', en este bucle se sube y baja el pin 17"

try:
    while (True):
        GPIO.output(17, GPIO.HIGH)
        GPIO.output(17, GPIO.LOW)
except:
    print("\nSalió")
    GPIO.cleanup()
    
        
            