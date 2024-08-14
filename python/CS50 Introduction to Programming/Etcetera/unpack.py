#Unpacking
def total(galleons, sickles, knuts):
    return(galleons*17 + sickles) * 29 + knuts

coins = [100, 50 , 25]

#Unpacking using *
print(total(*coins), "Knuts")
'''
first, _ = input("What's your name? ").split(" ")
print("Hello", first)
'''