# 1. Output your favorite phone brand
x = ("samsung", "iphone", "tecno", "redmi")
print(x[0])  # Example: samsung

# 2. Negative indexing to print 2nd last item
print(x[-2])

# 3. Update “iphone” to “itel”
x_list = list(x)
x_list[1] = "itel"
x = tuple(x_list)
print(x)

# 4. Add “Huawei” to your tuple
x = x + ("Huawei",)
print(x)

# 5. Loop through the tuple
for phone in x:
    print(phone)

# 6. Remove/delete the first item
x = x[1:]
print(x)

# 7. Tuple of cities in Uganda
cities = tuple(["Kampala", "Entebbe", "Gulu", "Mbarara"])
print(cities)

# 8. Unpack your tuple
a, b, c, d = cities
print(a, b, c, d)

# 9. Print 2nd, 3rd, 4th cities
print(cities[1:4])

# 10. Join two tuples
first_names = ("John", "Jane")
second_names = ("Doe", "Smith")
full_names = first_names + second_names
print(full_names)

# 11. Tuple of colors, multiply by 3
colors = ("red", "blue")
print(colors * 3)

# 12. Return number of times 8 appears
thistuple = (1, 3, 7, 8, 7, 5, 4, 6, 8, 5)
print(thistuple.count(8))