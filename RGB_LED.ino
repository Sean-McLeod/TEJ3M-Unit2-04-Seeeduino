import time
import board
from digitalio import DigitalInOut, Direction
 
led = DigitalInOut(board.D10)
led2 = DigitalInOut(board.D8)
led3 = DigitalInOut(board.D7)

led.direction = Direction.OUTPUT
led2.direction = Direction.OUTPUT
led3.direction = Direction.OUTPUT
 
while True:
    led.value = True
    time.sleep(1)
    led.value = False
    
    led2.value = True
    time.sleep(1)
    led2.value = False
    
    led3.value = True
    time.sleep(1)
    led3.value = False
    

