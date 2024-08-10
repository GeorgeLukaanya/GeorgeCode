#Catching and handling errors
while True:
    try:
        x = int(input("Enter a number: "))
    except ValueError:
        print("This is not an integer")
#executed when the try block is true
    else:
        break
    #breaks the loop when try is true

print(f"x is {x}")