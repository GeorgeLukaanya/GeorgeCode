class Multiplier:
    def multiply(self, *args):
        result = 1
        for num in args:
            result *= num
        return result

m = Multiplier()

print(m.multiply())          # 1
print(m.multiply(2))         # 2
print(m.multiply(2, 3))      # 6
print(m.multiply(2, 3, 4))   # 24
