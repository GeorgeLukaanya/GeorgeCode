#Assignment 3
#Program to handle errors, program should take two input numbers and 
# divide them, use an infinite loop to keep asking until valid input is provided.

while True:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        result = a / b
    except ValueError:
        print("Invalid input. Please enter integers only.")
    except ZeroDivisionError:
        print("Cannot divide by zero. Please enter a non-zero second number.")
    else:
        print(f"{a} / {b} = {result}")
        break
    finally:
        print("Attempt complete.\n")