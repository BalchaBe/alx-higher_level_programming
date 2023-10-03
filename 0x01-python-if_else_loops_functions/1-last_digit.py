#!/usr/bin/python3
import random
num = random.randint(-10000, 10000)
if num < 0:
    x = num % -10
else:
    x = num % 10
if x > 5:
   print("Last digit of {:d} is {:d} and is greater\
 than 5".format(num, x))
else if x == 0:
     print("Last digit of {:d} is {:d} and is 0".format(num, x))
else:
    print("Last digit of {:d} is {:d} and is less than\
 6 and not 0".format(num, x))
