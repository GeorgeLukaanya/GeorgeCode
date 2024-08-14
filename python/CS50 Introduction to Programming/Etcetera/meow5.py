import argparse

parser = argparse.ArgumentParser(description="Meow like a cat")
parser.add_argument("-n", default=1, help="Number of time to meow", type=int)
args = parser.parse_args()

#the library imports sys and converts to an integer
for _ in range(args.n):#contains the entered integer as third argument 
    print("meow")