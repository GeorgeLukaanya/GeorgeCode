def main():
    student = get_student()
    if student[0] == 'Padma':
        student[1] = 'Ravenclaw'
    print(f"{student[0]} from {student[1]}")

#using a tuple
def get_student():
    name = input("Name: ")
    house = input("House: ")
    return (name, house) #tuple which is immutable
    
if __name__ == "__main__":
    main()