def main():
    print_column(3)

    print_row(4)

    print()

    print_square(3)

def print_column(height):
    for _ in range(height):
        print("#")

def print_row(width):
    for _ in range(width):
        print("?" , end="" )

def print_square(num):
    #for each row in square
    for i in range(num):
        for j in range(num):
            #print brick
            print("*" , end="")
        print()

main() #ABSTRACTION