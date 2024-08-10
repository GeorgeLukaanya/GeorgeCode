def main():
    x = get_int()
    print(f"x is {x}")

def get_int():
    while True:
        try:
            x = int(input("Enter a number: "))
            return x #breaks loop and returns x
        except ValueError:
            print("This is not an integer")

main()
