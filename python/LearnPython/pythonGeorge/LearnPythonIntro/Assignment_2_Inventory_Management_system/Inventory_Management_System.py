# Use loops to display or update a list of stock items

# Initial list of stock items
stock_items = ["Sugar", "Salt", "Rice", "Soap", "Bread"]

# Display all stock items
print("Current stock items:")
for item in stock_items:
    print("-", item)

# Update: Add a new item to the stock
new_item = input("Enter a new stock item to add: ")
stock_items.append(new_item)

print("\nUpdated stock items:")
for item in stock_items:
    print("-", item)