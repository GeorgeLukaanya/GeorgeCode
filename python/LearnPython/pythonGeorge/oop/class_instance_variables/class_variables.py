#  Class Variables
# Shared across all instances of the class.
# Defined outside any instance methods.

class Car:
    wheels = 4 #class varibale
    
    def __init__(self, model):
        self.model = model#instance variable
        
c1 = Car("Toyota")
c2 = Car("Mazda")
print(f"{c1.model} has {c1.wheels} wheels")
print(f"{c2.model} has {c2.wheels} wheels")

print(Car.wheels)  # 4
