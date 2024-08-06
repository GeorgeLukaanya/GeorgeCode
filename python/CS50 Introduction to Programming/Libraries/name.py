import sys

try:
    print("Hello, my name is ", sys.argv[1])
except IndexError:
    print("Too few arguments")