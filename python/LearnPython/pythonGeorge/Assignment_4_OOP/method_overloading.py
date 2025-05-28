class Calculator:
    def add(self, a, b, c=0):  # Simulates overloading with default argument
        return a + b + c

# Usage
calc = Calculator()
print(calc.add(2, 3))      # Output: 5 (uses a, b; c defaults to 0)
print(calc.add(2, 3, 4))   # Output: 9 (uses a, b, c)