#adding class methods to refine code better
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

    @classmethod
    def get(cls):
        name = input("Name: ")
        house = input("House: ")
        return cls(name, house)
        #return Student(name, house) is also correct


def main():
    student = Student.get()
    #calls to the __str__ method
    #student.house = "Number Four, Privet Drive"
    print(student )


if __name__ == "__main__":
    main()

