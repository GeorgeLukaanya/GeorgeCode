import sys

if len(sys.argv) < 2:
    sys.exit("too few arguments")
    
elif len(sys.argv) > 2:
    sys.exit("Too many arguments")
#else:

print(f"Hello, my name is {sys.argv[1]}")