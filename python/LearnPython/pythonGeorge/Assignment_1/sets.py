# 1. Create a set of 3 favorite beverages
beverages = set(["tea", "coffee", "juice"])
print(beverages)

# 2. Add 2 more items
beverages.update(["water", "milk"])
print(beverages)

# 3. Check if "microwave" is present
mySet = {"oven", "kettle", "microwave", "refrigerator"}
print("microwave" in mySet)

# 4. Remove “kettle”
mySet.remove("kettle")
print(mySet)

# 5. Loop through the set
for item in mySet:
    print(item)

# 6. Add elements from list to set
myset2 = {"apple", "banana", "cherry", "date"}
mylist = ["fig", "grape"]
myset2.update(mylist)
print(myset2)

# 7. Join two sets
ages = {20, 21, 22}
first_names = {"John", "Jane"}
combined = ages.union(first_names)
print(combined)