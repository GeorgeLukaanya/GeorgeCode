def main():
    x=get_int
    print(f"x is {x}")
    
def get_int():
    while True:
        try:
            x=int(input("Enter the value of x: "))
        except ValueError:#wrong value entered
            print("x is not an integer.")
        else:
            break  
    return x

main()