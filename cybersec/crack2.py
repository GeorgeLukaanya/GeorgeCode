from string import ascii_letters
from itertools import product
#for 4 charatcter passcode
for passcode in product(ascii_letters, repeat=4):
    print(passcode)
