#The random module
from random import choice, randint, shuffle

coin = choice(["heads", "tails"])
print(coin)

number = randint(1, 10)
print(number)

cards = ["jack", "queen", "king"] 
shuffle(cards)
for card in cards:
    print(cards)