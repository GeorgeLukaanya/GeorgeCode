class Animal:
    def speak(self):
        print("The animal makes a sound")
    
class Dog(Animal):
    def bark(self):
        print("The dog barks")
        
d = Dog()
d.speak()
d.bark()
