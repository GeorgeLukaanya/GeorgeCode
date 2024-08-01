def main():
    hello()#calling without argument
    name = input("Enter your name: ")
    hello(name)

def hello(to = "world"):#defining a function with a default value
    print(f"Hello, {to}")
#The function has to be defined before being called

main()#allows organisation