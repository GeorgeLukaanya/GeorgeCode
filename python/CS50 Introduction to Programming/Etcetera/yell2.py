def main():
    yell("This is CS50")
    
#Using the map function
def yell(*words):
    #list comprehension creates a list and appends to it directly
    uppercased = [word.upper() for word in words]
    print(*uppercased)

if __name__ == "__main__":
    main()