#Exercise : raise a custom exception that checks for a positive number

# 1. Define a custom exception class
class NotPositiveError(Exception):
    pass

# 2. Function that checks for a positive number
def check_positive(number):
    if number <= 0:
        raise NotPositiveError("The number must be positive!")
    else:
        print(f"{number} is a positive number.")

# 3. Example usage
try:
    num = int(input("Enter a positive number: "))
    check_positive(num)
except NotPositiveError as e:
    print("Custom Exception:", e)
except ValueError:
    print("Please enter a valid integer.")
