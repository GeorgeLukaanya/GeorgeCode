from string import ascii_letters, digits, punctuation
from itertools import product
#for 8 character passcode
for passcode in product(ascii_letters+digits+punctuation, repeat=8):
    print(passcode)