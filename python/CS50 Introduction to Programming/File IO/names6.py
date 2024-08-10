#reads a sorted file
names = []#creates a list to hold the names first before a sorted version is sorted

#readng the file in memory into a file
with open("names.txt") as file: #missing the "r" argument has no effect
    for line in file:
        names.append(line.rstrip())

#printing the sorted list
for name in sorted(names, reverse=True):#prints in descending order
    print(f"hello, {name}")