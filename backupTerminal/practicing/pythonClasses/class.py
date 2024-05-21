#!/usr/bin/python3
class A():
    def __init__(this):
        this.__private = "Very private"
        this._protected = "I'm protected"
        this.public = "Im public"

class P:
    def __init__(self, value):
        self.__value = value

    @property
    def getAndSet(self):
        return self.__value
    @getAndSet.setter
    def getAndSet(self, x):
        if x < 0:
            self.__value = 0
        elif x > 100:
            self.__value = 1000
        else:
            self.__value = x

p1 = P(1010)
p1.getAndSet = -4
print(p1.getAndSet)
