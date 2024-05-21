#!/usr/bin/python3

try:
    file = open('mydata3.txt', 'r')
except FileNotFoundError:
    print("The file does not exist")
except:
    print("Something else Happend")
else:
    print(file.read())
finally:
    try:
        file.close()
    except NameError:
        print("Impossible to close the file")
