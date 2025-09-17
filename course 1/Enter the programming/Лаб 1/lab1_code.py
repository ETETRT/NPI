from math import *

print("Введите значения x, y и z (каждое в отдельной строке)")
x, y, z  = float(input()), float(input()), float(input())

# s = y**(sqrt(abs(x))**3) + cos(y)**3 * abs(x - y) * (1 + sin(x)**2) / exp(abs(x-y))
s = y**(abs(x)**(1/3)) + cos(y)**3 * abs(x - y)\
      * (1 + sin(z)**2/sqrt(x + y)) / (exp(abs(x-y)) + x/2)

print("s = ", s)