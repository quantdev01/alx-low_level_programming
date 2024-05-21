#!/usr/bin/python3

import random


lists = []
h = 0
t = 0

for i in range(100):
    lists.append(random.choice(['H', 'T']))

for i in range(len(lists)):
    if (lists[i] == 'H'):
        h += 1
    else:
        t += 1

print('Heads : {}'.format(h))
print('Tails : {}'.format(t))
