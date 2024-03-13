#This is my first python program
"""This is a multilinecomment"""
print("Hello, 'friend'")
print("Hello, \"friend\"")
name=input("What's your name?:\n").strip().title()
age=input("What's your age?:\n")
#Removes whitespace from string and capitalise the name
name=name.strip().title()
print("Hello, ", end="")
print(name, end="")
print(". You are ", end="")
print(age, end="")
print(" years old", end="\n")
print(f"Hello, {name}. You are {age} years old.")
print("Hello "+name+". You are "+age+" years old.")
#Split user's name into first name and last name
first, last = name.split(" ")
print(f"Hello {first}")