import serial
s = serial.Serial('/tty/ttyACM1', 9600)
while 1:
  s.readline()
