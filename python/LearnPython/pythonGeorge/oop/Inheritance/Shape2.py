import math
class Shape:
    def area(self):
        print("Area not defined")
        
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        print(math.pi * self.radius ** 2)

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        print(self.length * self.width)

def shape_area(shape):
    shape.area()
    
shape_area(Circle(3))      # Outputs: 28.27...
shape_area(Rectangle(4, 5))  # Outputs: 20
