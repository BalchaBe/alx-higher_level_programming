#!/usr/bin/python3
import random
num = random.randint(-10000, 10000)
dt = abs(num) % 10
if num < 0:
    dt = -dt
print("Last digit of {} is {} and is ".format(num, dt), end="")
if dt > 5:
    print("greater than 5")
elif dt == 0:
    print("0")
else:
    print("less than 6 and not 0")
