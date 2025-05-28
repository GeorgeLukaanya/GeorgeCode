class Book:
    
    library_name = "City Library"
    
    def __init__(self, title, author):
        self.title = title
        self.author = author
        
b1 = Book("The Monk Who Sold His Ferrari", "Robin Sharma")
b2 = Book("A Clash Of Kings", "George R.R. Martin")

print(f"{b1.title} by {b1.author} can be found at {Book.library_name}")
print(f"{b2.title} by {b2.author} can be found at {Book.library_name}")