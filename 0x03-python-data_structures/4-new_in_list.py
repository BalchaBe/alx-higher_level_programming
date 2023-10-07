#!/usr/bin/python3
def new_in_list(my_list, idh, element):
    listlength = len(my_list) - 1
    if (idh < 0 or idh > listlength):
        return (my_list)
    else:
        new_list = my_list[:]
        new_list[idh] = element
        return (new_list)
