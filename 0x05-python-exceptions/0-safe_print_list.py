#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    m = 0
    try:
        for m in range(x):
            print("{}".format(my_list[m]), end="")
            m += 1
        print("")
    except IndexError:
        print("")
    return m
