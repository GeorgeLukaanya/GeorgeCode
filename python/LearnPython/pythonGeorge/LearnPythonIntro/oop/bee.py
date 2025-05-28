class Bee:
    def __init__(self, name, has_pollen):
        self.name = name
        self.has_pollen = has_pollen
        
    def fly(self):
        print(f"{self.name} is fling")
        
    def status(self):
        if self.has_pollen:
            print(f"{self.name} is carrying pollen")
        else:
            print(f"{self.name} is not carrying pollen.")
            
#initialising objects
bee1 = Bee("BeeA", True)
bee2 = Bee("BeeB", False)
bee3 = Bee("BeeC", True)

bee1.fly()
bee1.status()

#modifying object properties
bee1.has_pollen = False
bee1.status()
bee2.status()
bee3.status()
#Deleting obejct properties and obejcts using the "del" keyword
#del bee3.name
#bee3.status()

class MyClass:
    pass#empty class
