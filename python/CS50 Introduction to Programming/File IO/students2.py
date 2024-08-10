#PRINTING A SORTED LIST
students = []

with open("names.csv") as file:
    for line in file:
        row = line.rstrip().split(",")
        students.append(f"{row[0]} is in {row[1]}")

for student in sorted(students):
    print(student)