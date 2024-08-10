#reads a csv file
with open("student.csv", "r") as file:
    for line in file:
        row = line.rstrip().split(",")
        print(f"{row[0]} lives in {row[1]}")

''' 
name, place = line.rstrip().split(",")
    print(f"{name} lives in {place}")
'''