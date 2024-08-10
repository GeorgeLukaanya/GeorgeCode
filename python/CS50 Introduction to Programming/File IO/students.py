#reads a csv file
with open("names.csv", "r") as file:
    for line in file:
        row = line.rstrip().split(",")
        print(f"{row[0]} lives in {row[1]}")