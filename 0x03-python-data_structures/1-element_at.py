#!/usr/bin/python3
def element_at(my_list, idh):
    listlength = len(my_list) - 1
    if (idh < 0 or idh > listlength):
        return (None)
    else:
        return (my_list[idh])
