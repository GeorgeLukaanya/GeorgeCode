#reads the file in a more compact way
with open("names.txt", "r") as file:
    for line in file:
        print("hello, ", line.rstrip())