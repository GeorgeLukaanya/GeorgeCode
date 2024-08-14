#Use of type hints
def meow(n: int) -> str: #hinting a return value using None
    return "meow\n" * n

#This is also a type hint
number: int = int(input("Number: "))
meows: str = meow(number)
print(meows, end ="")