from string import digits
from itertools import product
#4 digit passcode
for passcode in product(digits, repeat=4):
    print(passcode)