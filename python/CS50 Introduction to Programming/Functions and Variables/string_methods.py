#prompts user for input
#enter both first and last name
name = input("What is your name? ").strip().title()

'''
#removes whitespace from string
name = name.strip()

#Capitalises first input
name = name.capitalize()

#capitalises the first letter of each word
name = name.title()
'''

#split user's name into first and last name
first, last = name.split(" ")
print(f"Hello , {first}")