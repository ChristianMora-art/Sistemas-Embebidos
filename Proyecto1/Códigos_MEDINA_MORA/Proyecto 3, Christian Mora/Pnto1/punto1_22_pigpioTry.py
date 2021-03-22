import time
import pigpio
#Christian R. Mora P.
#pigpio requiere que pigpio daemon esté corriendo, hacer sudo pigpiod antes de correr este script
pi = pigpio.pi()#instancia para conección local
pi.set_mode(27, pigpio.OUTPUT)
#pi.set_servo_pulsewidth(27, 1500)
#pi.set_PWM_dutycycle(27, 128)
inicio = time.time()

#while (time.time() - inicio) < 60.0:
while (True):
    pi.write(27, 0)
    pi.write(27, 1)
pi.set_servo_pulsewidth(27, 0)
pi.set_PWM_dutycycle(27, 0)
pi.stop()