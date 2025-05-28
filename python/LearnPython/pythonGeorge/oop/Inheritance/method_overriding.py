# 🔹 What is Method Overriding?
# Method overriding means:
# A child class provides its own version of a method that 
# already exists in the parent class.
# When you call the method on the child object, the child’s
# version is used — not the parent’s.

class Vehicle:
    def start(self):
        print("Starting vehicle ..")
        
class Car(Vehicle):
    def start(self):
        print("Starting car engine ..")
        
v = Vehicle()
v.start()

c = Car()
c.start()