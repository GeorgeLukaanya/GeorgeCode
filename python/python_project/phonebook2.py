people=[
    {"name":"George", "number":"+256770736755"},
    {"name":"George", "number":"+256770736755"},
    {"name":"George", "number":"+256770736755"},
]

name=input("Name: ")

for person in people:
    if person["name"] == name:
        number=person["number"]
        print(f"Found {number}")
        break
else:
    print("Not found")
