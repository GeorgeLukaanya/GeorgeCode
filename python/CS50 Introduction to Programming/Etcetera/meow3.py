#Use of type hints and using doc strings
def meow(n: int) -> str: #hinting a return value using None
    """
    Meow n times
    
    #This is a third party convention 
    
    :param n:Number of times to meow
    :type n: int
    :raise TypeError: if n is not an int
    :return: A string of n meows, one per line
    :rtype: str
    """
    return "meow\n" * n

#This is also a type hint
number: int = int(input("Number: "))
meows: str = meow(number)
print(meows, end ="")