from multipledispatch import dispatch

class Calculator:
    @dispatch((int, float), (int, float))
    def sum(self, x, y):
        """Add two numbers (integers or floats)."""
        return x + y

    @dispatch((int, float), (int, float), (int, float))
    def sum(self, x, y, z):
        """Add three numbers (integers or floats)."""
        return x + y + z

#Calculator object
calc = Calculator()

# Test overloaded sum method
print(calc.sum(1, 2))       
print(calc.sum(1.5, 2.5))   
print(calc.sum(1, 2, 3))   
print(calc.sum(1.5, 2.5, 3.5))  