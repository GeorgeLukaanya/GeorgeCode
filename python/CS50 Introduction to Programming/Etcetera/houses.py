#sets
students = [
    {"name": "Hermione", "house": "Grynffindor"},
    {"name": "Harry", "house": "Grynffindor"},
    {"name": "Ron", "house": "Grynffindor"},
    {"name": "Draco", "house": "Slytherine"},
    {"name": "Padma", "house": "Ravenclaw"}
]

#using a set
houses = set()
for student in students:
    houses.add(student["house"])

for house in sorted(houses):
    print(house)

'''
#using a list
houses = []
for student in students:
    if student["house"] not in houses:
        houses.append(student["house"])
 
for house in sorted(houses):
    print(house)
'''
