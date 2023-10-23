#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    new = [0] * list_length
    for m in range(list_length):
        try:
            result = my_list_1[m] / my_list_2[m]
            new[m] = result
        except ZeroDivisionError:
            print("division by 0")
        except TypeError:
            print("wrong ")
        except IndexError:
            print("out of range")
        finally:
            pass
    return new
