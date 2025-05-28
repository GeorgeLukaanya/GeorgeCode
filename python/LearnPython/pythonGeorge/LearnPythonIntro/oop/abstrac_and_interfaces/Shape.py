from abc import ABC, abstractmethod

# Abstract base class
class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

# Concrete class: Square
class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side ** 2

# Concrete class: Triangle
class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height

s = Square(4)
t = Triangle(5, 3)

print("Square area:", s.area())     # 16
print("Triangle area:", t.area())   # 7.5
