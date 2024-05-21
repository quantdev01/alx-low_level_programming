#!/usr/bin/python3

import random
import math

my_list = []

i = len(my_list) - 1
for i in range(5):
    my_list.append(random.randint(1, 9))

print('List before\n')
print(my_list)


while i > 1:
    j = 0

    while j < i:
        if (my_list[j] > my_list[j + 1]):

            temp = my_list[j]
            my_list[j] = my_list[j + 1]
            my_list[j + 1] = temp
        else:
            pass
        j += 1

    i -= 1

print(my_list)
