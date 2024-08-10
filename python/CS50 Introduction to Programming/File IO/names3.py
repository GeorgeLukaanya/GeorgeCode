name = input("what's your name")

with open("names.txt", "a") as file:#using with to open and close
    file.write(f"{name}\n")