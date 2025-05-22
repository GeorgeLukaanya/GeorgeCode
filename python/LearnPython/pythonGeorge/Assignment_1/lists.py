# 1. Create a list with 5 items and output the 2nd item
names = ["Alice", "Bob", "Charlie", "David", "Eve"]
print(names[1])

# 2. Change the value of the first item
names[0] = "Alex"
print(names)

# 3. Add a sixth item
names.append("Frank")
print(names)

# 4. Add “Bathel” as the 3rd item
names.insert(2, "Bathel")
print(names)

# 5. Remove the 4th item
names.pop(3)
print(names)

# 6. Use negative indexing to print the last item
print(names[-1])

# 7. New list with 7 items, print 3rd, 4th, 5th
new_list = [1, 2, 3, 4, 5, 6, 7]
print(new_list[2:5])

# 8. List of countries and make a copy
countries = ["Uganda", "Kenya", "Tanzania", "Rwanda"]
countries_copy = countries.copy()
print(countries_copy)

# 9. Loop through the list of countries
for country in countries:
    print(country)

# 10. List of animal names, sort ascending and descending
animals = ["dog", "cat", "elephant", "giraffe", "antelope"]
print(sorted(animals))         # Ascending
print(sorted(animals, reverse=True))  # Descending

# 11. Output only animal names with 'a'
for animal in animals:
    if 'a' in animal:
        print(animal)

# 12. Join two lists of first and second names
first_names = ["John", "Jane"]
second_names = ["Doe", "Smith"]
full_names = first_names + second_names
print(full_names)