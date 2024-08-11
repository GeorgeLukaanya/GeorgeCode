#appending details to the csv file
import csv

name = input("What's your name? ")
home = input("Where's your home? ")

with open("student3.csv", "a") as file:
    #using dictionary writing where order doesn't really matter
    writer = csv.DictWriter(file, fieldnames=["name", "home"])
    writer.writerow({"name":name, "home": home})