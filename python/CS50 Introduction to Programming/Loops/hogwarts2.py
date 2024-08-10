#Dealing with dictionaries

students = {"Hermione": "Gryffindor",
            "Harry": "Gryffindor",
            "Ron": "Gryffindor",
            "Draco": "Slytherin"
            }

#using the legacy method
print(students["Hermione"])
print(students["Harry"])
print(students["Ron"])
print(students["Draco"])

print("\n\n")

#prints only the keys
for student in students:
    print(student)

print("\n\n")
#prints both the key and the valueg
for student in students:
    print(student, students[student], sep=", ")