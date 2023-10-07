#!/usr/bin/python3
def replace_in_list(my_list, idh, element):
    listlength = len(my_list) - 1
    if (idh < 0 or idh > listlength):
        return (my_list)
    else:
        my_list[idh] = element
        return (my_list)
