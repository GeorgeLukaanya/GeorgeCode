#Unpacking
def total(galleons, sickles, knuts):
    return (galleons*17 + sickles) * 29 + knuts

coins = [100, 50 , 25]

#Unpacking using *
#unpacks a data structure; works for tuples, enumerations where order is preserved
print(total(*coins), "Knuts")
print(total(coins[0], coins[1], coins[2]), "Knuts")
print(total(galleons=100, sickles=50, knuts=25), "Knuts")

'''
first, _ = input("What's your name? ").split(" ")
print("Hello", first)
'''