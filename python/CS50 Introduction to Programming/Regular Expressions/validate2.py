import re

email = input("What's your email? ")

#.+@.+ = ..*@..*
#r for a raw string
#^[^@]+@[^@]+\.edu$
 
if re.search(r"^[^@]+@[^@]+\.edu$" , email):  
    print("Valid")
else:
    print("Invalid")