'''
x = int(input("What's x? "))
y = int(input("What's y? "))
'''

x = float(input("What's x? ")) #this is typecasting
y = float(input("What's y? "))

#round(number[, ndigits])
z = x / y
print(f"{z:,}")
print(round(z,2))
print(f"{z:.2f}")