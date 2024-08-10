#sorting but using a dictionary
students = []

with open("names.csv") as file:
    for line in file:
        row = line.rstrip().split(",")
        student = {"name":row[0], "place":row[1]} #dictionary
        #student["name"] = row[0]
        #student["place"] = row[1]
        students.append(student)

#function to return student's name
def get_name(student):
    return student["name"]

#passing the get_name function into the sorted key argument
for student in sorted(students, key=get_name):
    print(f"{student['name']} lives in {student['place']}")