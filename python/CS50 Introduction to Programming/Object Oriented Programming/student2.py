def main():
    student = get_student()
    if student["name"] == "Padma":
        student["house"] = "Ravenclaw"
    print(f"{student['name']} from {student['house']}")

#using a dictionary, they are mutable
def get_student():
    student = {}
    student["name"] = input("Name: ")
    student["house"] = input("House: ")
    return student

#alternative
def get_student():
    name = input("Name: ")
    house = input("House: ")
    return {"name":name, "house": house}
    
if __name__ == "__main__":
    main()