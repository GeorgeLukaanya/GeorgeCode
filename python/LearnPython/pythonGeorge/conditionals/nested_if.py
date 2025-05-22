# Scenario : Movie ticket booking system
# Rules:
# A person must be 1 years to watch an R rated movie
# If they are 18 years or olderm check if they have a valid ticket
# If they are 18 years or older and have a valid ticket, they can watch the movie

#nested if
age = int(input("Enter your age: "))
if age >= 18:
    ticket = input("Do you have a valid ticket? (yes/no): ")
    if ticket.lower() == "yes":
        print("You can watch the movie.")
    else:
        print("You cannot watch the movie without a valid ticket.")
else:
    print("You are not old enough to watch this movie.")