'''
| Method Type     | First Argument               | Can Access | Used For                              |
| --------------- | ---------------------------- | ---------- | ------------------------------------- |
| Instance Method | `self`                       | instance   | Most common; works with instance data |
| Class Method    | `cls`                        | class      | Accesses/modifies class-level data    |
| Static Method   | none (unless manually added) | neither    | Utility/helper function inside class  |

'''

class Dog:
    def __init__(self, name):
        self.name = name
        
    def bark(self):
        print(f"{self.name} says woof!")
        
d = Dog("Max")
d.bark()