students = [
    {"name": "Hermione", "house": "Gryffindor"},
    {"name": "Harry", "house": "Gryffindor"},
    {"name": "Ron", "house": "Gryffindor"},
    {"name": "Draco", "house": "Slytherine"},
    {"name": "Padma", "house": "Ravenclaw"},
]

'''
def is_gryffindor(s):
    return s["house"] == "Gryffindor"
'''

#shorthand function filter()
gryffindors = filter(lambda s: s["house"] == "Gryffindor", students)
for gryffindor in sorted(gryffindors, key=lambda s: s["name"]):
    print(gryffindor["name"])


"""
gryffindors = [
    student["name"] for student in students if student["house"] == "Gryffindor"
]

for gryffindor in sorted(gryffindors):
    print(gryffindor)
"""
