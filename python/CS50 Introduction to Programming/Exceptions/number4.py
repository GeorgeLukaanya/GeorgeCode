def main():
    x = get_int("What's x? ")
    print(f"x is {x}")

def get_int(prompt):
    while True:
        try:
            x = int(input(prompt))
            return x #breaks loop and returns x
        except ValueError:
            pass  #does nothing with the captured exception
main()
