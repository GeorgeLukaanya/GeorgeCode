# #Return statement: ends function execution and sends back feedback

# def product(x, y, z):
#     return x * y * z

# print(product(2, 3, 4))

# def get_stats(a ,b):
#     return a + b, a - b

# sum_value, subtract_value = get_stats(20, 12)
# print(f"Sum: {sum_value}")
# print(f"Difference: {subtract_value}")

#Exercise 2
#Division, assuming second parameter cannot be zero
def division(a, b):
    if b == 0:
        return "Cannot divide by zero(0)"
    else:
        return a/b

a = int(input("Enter the first value: "))
b = int(input("Enter the second value: "))
print(division(a, b))