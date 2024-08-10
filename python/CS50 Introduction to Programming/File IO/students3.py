#sorting but using a dictionary
students = []

with open("student.csv") as file:
    for line in file:
        row = line.rstrip().split(",")
        student = {"name":row[0], "place":row[1]} #dictionary
        #student["name"] = row[0]
        #student["place"] = row[1]
        students.append(student)

#function to return student's name
def get_name(student):
    return student["name"]

#passing the get_name function into the sorted key argument in descending order
for student in sorted(students, key = get_name, reverse = True):
    print(f"{student['name']} lives in {student['place']}")

#function to return student's name
def get_place(student):
    return student["place"]

print()

#passing the get_name function into the sorted key argument in descending order
for student in sorted(students, key = get_place, reverse = True):
    print(f"{student['name']} lives in {student['place']}")