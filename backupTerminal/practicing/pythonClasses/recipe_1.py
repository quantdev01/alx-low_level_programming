#!/usr/bin/python3

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def say_hi(self):
        print("Hello {}, you are {} years old".format(self.name, self.age))

p1 = Person("Daniel", 22)
p1.say_hi()
