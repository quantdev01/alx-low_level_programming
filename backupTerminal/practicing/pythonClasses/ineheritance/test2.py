#!/usr/bin/python3

class A:
    def __init__(self, name):
        self.name = name
        print("Parent classe")

    def getName(self):
        return self.name

class B(A):
    def __init__(self, name, age):
        A.__init__(self, name)
        self.age = age
        print("CHild object")

    def getAge(self):
        return self.age

obj1 = B("Daniel", 22)

print(obj1.getName())
print(obj1.getAge())
