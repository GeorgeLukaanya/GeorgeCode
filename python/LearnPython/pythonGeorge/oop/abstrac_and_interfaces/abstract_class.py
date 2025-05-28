# 🔹 What is an Abstract Class?
# An abstract class is a class that:

# Cannot be instantiated (you can't create objects directly from it)

# Is meant to be inherited by other classes

# Often includes abstract methods (methods without a body) that must 
# be implemented by subclasses

# Python provides this functionality via the abc (Abstract Base Classes)
# module.

from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def sound(self):
        pass
    
#implementing the abstract class
class Dog(Animal):
    def sound(self):
        print("Bark")
        
d = Dog()
d.sound()
        