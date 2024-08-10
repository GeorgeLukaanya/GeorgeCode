def main():
    number = get_number()
    meow(number)
#returning values
def get_number():
    while True:
        n = int(input("Enter a number: "))
        if n > 0:
            break
    return n

def meow(n):
    for i in range(n):
        print("meow")


main()