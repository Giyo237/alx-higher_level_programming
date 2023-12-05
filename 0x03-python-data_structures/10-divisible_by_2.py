#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    i = []
    for num in my_list:
        if num % 2 == 0:
            i.append(True)
        else:
            i.append(False)
    return i
