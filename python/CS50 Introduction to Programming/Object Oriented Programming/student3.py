#introduction to OOP

class Student:
    #instance method for initialisation
    #self gives access to the current object that has just been created
    def __init__(self, name, house):
        #instance variables
        self.name = name
        self.house = house


def main():
    student = get_student()
    """if student[0] == 'Padma':
        student[1] = 'Ravenclaw'"""
    print(f"{student.name} from {student.house}")

'''
#using a class
def get_student():
    #creating an object/instance of a class
    student = Student()
    student.name = input("Name: ")
    student.house = input("House: ")
    return student
'''

#alternative 2
def get_student():
    #creating an object/instance of a class
    name = input("Name: ")
    house = input("House: ")
    #constructor call
    student = Student(name, house)
    return student

if __name__ == "__main__":
    main()