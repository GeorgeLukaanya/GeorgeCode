import sys

if len(sys.argv) < 2:
    sys.exit("too few arguments")
    
for arg in sys.argv[1:]:#This is slicinga list
    print(f"Hello, my name is {arg}")