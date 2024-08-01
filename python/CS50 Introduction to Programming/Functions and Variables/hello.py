#This is a single line comment
"""This is a multiline comment"""
'''This is a multiline comment'''

name = input("What is your name?:\n")

#concatenating using + symbol
print("Hello, " + name)

#format string using f and {variable name}
print(f"Hello, {name}")

#using type identifierss i.e %s, %d
print("Hello, %s" % (name))

#passing a second argument separated with a , symbol
print("Hello,", name)

'''format of print:
print(*objects, sep = ' ', end = '\n', file = sys.stdout, flush = False )
'''
print("Hello, ", sep = " ", end = "")
print(name)

print("Hello, 'friend'")
print("Hello, \"friend\"")