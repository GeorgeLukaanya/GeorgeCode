#Use default arguments
class Calculator:
    def add(self, a=0, b=0, c=0):
        return a + b + c

c = Calculator()
print(c.add())         # 0
print(c.add(2))        # 2
print(c.add(2, 3))     # 5
print(c.add(2, 3, 4))  # 9
