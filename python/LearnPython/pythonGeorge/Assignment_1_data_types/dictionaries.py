# 1. Print the value of the shoe size
Shoes = {
    "brand": "Nick",
    "color": "black",
    "size": 40
}
print(Shoes["size"])

# 2. Change the value "Nick" to "Adidas"
Shoes["brand"] = "Adidas"
print(Shoes)

# 3. Add a key/value pair "type": "sneakers"
Shoes["type"] = "sneakers"
print(Shoes)

# 4. Return a list of all the keys
print(list(Shoes.keys()))

# 5. Return a list of all the values
print(list(Shoes.values()))

# 6. Check if the key "size" exists
print("size" in Shoes)

# 7. Loop through the dictionary
for key, value in Shoes.items():
    print(key, value)

# 8. Remove "color" from the dictionary
Shoes.pop("color")
print(Shoes)

# 9. Empty the dictionary
Shoes.clear()
print(Shoes)

# 10. Make a copy of a dictionary
mydict = {"name": "George", "age": 25}
mydict_copy = mydict.copy()
print(mydict_copy)

# 11. Show nested dictionaries
family = {
    "child1": {"name": "Anna", "age": 5},
    "child2": {"name": "Ben", "age": 7}
}
print(family)
