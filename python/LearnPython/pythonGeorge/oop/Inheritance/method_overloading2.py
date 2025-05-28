class Calculator:
    def add(self, *args):
        return sum(args)
    
c = Calculator()
print(c.add(1))          # 1
print(c.add(1, 2))       # 3
print(c.add(1, 2, 3, 4)) # 10
