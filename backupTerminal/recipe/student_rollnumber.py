#!/usr/bin/python3

student_list = []
new_list = []

for id in range(1, 501):
    print(id)
    student_list.append(id)

print(len(student_list))


for i in range(len(student_list)):
    if (i < 9):
        str = f"20192000{student_list[i]}"
        str = int(str)
        new_list.append(str)
        if (i >= 10 and i < 100):
            str1 = f"2019200{student_list[i]}"
            str1 = int(str1)
            new_list.append(str1)
    else:
        str2 = f"201920{student_list[i]}"
        str2 = int(str2)
        new_list.append(str2)
print(new_list)
