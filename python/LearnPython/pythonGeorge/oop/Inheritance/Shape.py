class Shape:
    def area(self):
        print("Area not defined")
        
class Circle(Shape):
    def area(self):
        print("Pi * radius * radius")

class Rectangle(Shape):
    def area(self):
        print("Lenght * Width")

def shape_area(shape):
    shape.area()
    
shape_area(Circle())
shape_area(Rectangle())
