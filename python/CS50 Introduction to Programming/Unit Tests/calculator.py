def main():
    x = int(input("What's x? "))
    print("x squared is ", square(x))

def square(n):
    return n * n

#ensures main only runs when the file is run explicitly
if __name__ == "__main__":
    main()