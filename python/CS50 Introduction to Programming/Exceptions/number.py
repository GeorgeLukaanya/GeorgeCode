#Catching and handling errors
while True:
    try:
        x = int(input("Enter a number: "))
        break
    except ValueError:
        print("This is not an integer")

print(f"x is {x}")