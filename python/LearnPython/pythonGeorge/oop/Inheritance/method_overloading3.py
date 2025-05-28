from multipledispatch import dispatch

class Calculator:
    @dispatch(int, int)
    def calculate(self, a, b):
        """Add two integers."""
        return f"Sum: {a + b}"

    @dispatch(float, int)
    def calculate(self, a, b):
        """Multiply a float and an integer."""
        return f"Product: {a * b}"

    @dispatch(list)
    def calculate(self, numbers):
        """Average a list of numbers."""
        if not numbers:
            return "Empty list provided."
        avg = sum(numbers) / len(numbers)
        return f"Average: {avg:.2f}"

# Create Calculator object
calc = Calculator()

# Test overloaded calculate method
print(calc.calculate(3, 5))              # Two integers
print(calc.calculate(2.5, 4))           # Float and integerl
print(calc.calculate([1, 2, 3, 4, 5]))  # List of numbers