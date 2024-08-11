import csv

students = []

with open("student3.csv") as file:
    reader = csv.DictReader(file) #caters for corner cases in csv file
    #this dictionary reader causes defensive coding
    for row in reader:
        students.append({"name":row["name"], "home":row["home"]})

for student in sorted(students, key = lambda student : student["name"]):
    print(f"{student['name']} is from {student['home']}")
 