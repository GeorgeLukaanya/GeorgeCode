class Person:
    def speak(self):
        print("I am the parent")

class Child(Person):
    def play(self):
        print("I am playing")
        
x = Child()
x.speak()
x.play()