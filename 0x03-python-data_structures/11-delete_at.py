#!/usr/bin/python3
def delete_at(my_list=[], idh=0):
    length_list = len(my_list) - 1
    if idh < 0 or idh > length_list:
        return(my_list)
    else:
        del my_list[idh]
        return(my_list)
