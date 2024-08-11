#this isn't the best way it can be done
email = input("What's your email? ").strip() #dealing with white space

username, domain = email.split("@")

#if (username) and ("." in domain):
if username and domain.endswith(".com"):
    print("valid")
else:
    print("Invalid")

'''
if "@" and "." in email:
    print("valid")
else:
    print("Invalid")
    #this isn't effective
'''

