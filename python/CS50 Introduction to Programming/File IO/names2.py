names = input("What's your name?")

#file = open("names.txt", "w")#opening in write mode
file = open("names.txt", "a")#appends to the file
file.write(f"{names}\n")#making sure the new name goes to the next linecod
file.close()