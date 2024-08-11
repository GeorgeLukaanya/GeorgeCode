email = input("What's your email? ").strip() #dealing with white space

if "@" and "." in email:
    print("valid")
else:
    print("Invalid")