import re  

email = input("What's your email? ").strip()

#.+@.+ = ..*@..*
#r for a raw string 
#^[^@]+@[^@]+\.edu$
#^[a-zA-Z0-9_]+@[a-zA-Z0-9_]+\.edu$
#^\w+@\w+\.edu$
#[a-zA-Z0-9_] = (\w|\s) which caters for a whitespace too
#(\w+\.)? 0 or 1 repetition
#^\w+@(\w+\.)?\w+\.(com|edu|gov|net|org)$
 
if re.search(r"^(\w|\.)+@(\w+\.)?\w+\.(com|edu|gov|net|org)$" , email, flags=re.IGNORECASE):  
    print("Valid")
else:
    print("Invalid") 