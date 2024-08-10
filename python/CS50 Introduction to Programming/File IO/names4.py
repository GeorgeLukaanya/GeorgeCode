#reading files
with open("names.txt", "r") as file:
    lines = file.readlines()

for line in lines:
    print(f"hello, {line}", end="")
    print(f"hello, ", line.rstrip())