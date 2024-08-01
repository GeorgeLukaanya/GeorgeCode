#Using a function to calculate the square of a number
def main():
    x = int(input("Enter a number: "))
    print("x squared is ", square(x))

def square(x):
    return x ** 2

main()
