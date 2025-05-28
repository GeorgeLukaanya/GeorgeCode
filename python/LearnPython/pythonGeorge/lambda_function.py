#Lambda functions
#small functions using the lambda keyword

#add two numbers 
add = lambda x, y : x + y
print(add(2, 3))

#Exercise 2 on square of a list
# numbers2 = [1, 2, 3, 4, 5]
# squares2 = [x ** 2 for x in numbers2]
# print(squares2)

# get squares of list [1..5] using lambda
numbers = [1, 2, 3, 4, 5]
squares = list(map(lambda x: x * x, numbers))
print(squares)
