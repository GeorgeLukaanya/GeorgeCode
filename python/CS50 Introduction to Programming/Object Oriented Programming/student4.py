class Student:
    def __init__(self, name, house):
        self.name = name
        self.house = house
        
         
    def __str__(self):
        #returns an f-string
        return f"{self.name} from {self.house}"
    
    @property
    def name(self):
        return self._name
    
    @name.setter
    def name(self, name):
        if not name:
            raise ValueError("Missing name")
        self._name = name

    #Getter method: these prevent programmers from bypassing seurity measures
    @property
    #The _ symbol ensures that error checking is done
    def house(self):
        return self._house
    
    #Setter method
    @house.setter
    def house(self, house):
        if house not in ["Gryffindor", "Hufflepuff", "Ravenclaw", "Slytherin"]:
            raise ValueError("Invalid house")
        #this causes python to check the methods
        self._house = house


def main():
    student = get_student()
    #calls to the __str__ method
    #student.house = "Number Four, Privet Drive"
    student._house = "Privet Drive"
    print(student )

def get_student():
    name = input("Name: ")
    house = input("House: ")
    return Student(name, house)

if __name__ == "__main__":
    main()

