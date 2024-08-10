#dealing with lists
students = ["George", "Lukaanya", "William"]

for student in students[0:2]:
    print(student, sep=",", end=",")


students = ["George", "Lukaanya", "William"]

for i in range(len(students)):
    print(i + 1, students[i])