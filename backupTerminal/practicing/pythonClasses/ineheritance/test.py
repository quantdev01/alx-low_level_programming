#!/usr/bin/python3

class Person():
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(self.name, self.age)

# child class
class Student(Person):
    def __init__(self, name, age):
        self.sName = name
        self.sAge = age
    # inheriting the properties of parent class
        super().__init__("Danki", 43)

    def displayInfo(self):
        print(self.sName, self.sAge)

obj = Student('Dan', 22)
obj.display()
obj.displayInfo()
