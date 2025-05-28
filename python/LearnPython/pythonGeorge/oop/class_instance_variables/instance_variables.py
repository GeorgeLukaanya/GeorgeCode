#Instance Variables
#Belong to a specific object.
#Defined using self inside methods like __init__.

class Car:
    def __init__(self, model):
        self.model = model #instance variable
        
c1 = Car("Toyota")
c2 = Car("Mazda")
print(c1.model)
print(c2.model)