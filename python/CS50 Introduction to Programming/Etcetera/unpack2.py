#Unpacking
def total(galleons, sickles, knuts):
    return (galleons*17 + sickles) * 29 + knuts

#passing the values using a dictionary
coins = {"galleons":100, "sickles":50, "knuts":25}

print(total(coins["galleons"], coins["sickles"], coins["knuts"]), "Knuts")
#Using 2 astericks for dictionaries
print(total(**coins), "Knuts")