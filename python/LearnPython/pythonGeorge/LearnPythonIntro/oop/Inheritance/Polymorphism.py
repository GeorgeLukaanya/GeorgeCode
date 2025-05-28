#Polymorphism allows different classes to be used interchangeably
# if they share the same method name.
# Polymorphism allows different classes to have methods with the same name, and you can call them in a uniform way.

# You've already done this with your shape_area(shape) function.



class Cat:
    def speak(self):
        print("Meow")
        
class Cow:
    def speak(self):
        print("Moo")
    
def animal_sound(animal):
    animal.speak()
    
animal_sound(Cat())
animal_sound(Cow())