class Student:
    def __init__(self, name, house):
        if not name:
            raise ValueError("Missing name")
        if house not in ["Gryffindor", "Hufflepuff", "Ravenclaw", "Slytherin"]:
            raise ValueError("Invalid house")
        self.name = name
        self.house = house
        #self.patronus = patronus
         
    def __str__(self):
        #returns an f-string
        return f"{self.name} from {self.house}"
    
'''
    
    #all class methods take an argument self atleast
    def charm(self):
        match self.patronus:
            case "Stag":
                return "🐎"
            case "Otter":
                return "🦏"
            case "jacl Russel terrier":
                return "🦣"
            case _:
                return "🗿"
'''

def main():
    student = get_student()
    #calls to the __str__ method
    print(student )
    #print(student.charm())

def get_student():
    name = input("Name: ")
    house = input("House: ")
    #patronus = input("Patronus: ")
    return Student(name, house)

if __name__ == "__main__":
    main()

