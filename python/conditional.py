x=int(input("What is x?\n"))
y=int(input("What is y?\n"))

if x<y:
    print(f"{x} is less than {y}")
elif x==y:
    print(f"{x} is equal to {y}")
else:
    print(f"{y} is less than {x}")