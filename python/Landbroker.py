print("This program takes the approximate lengths and widths of the land with a convex shape, computes the average lengths and widths then calculates area in square metres then converts to\n decimals and later computes the price of land given the unit price per decimal of the land\n ")
#The user enters the two approximate lengths, l1 and l2 and the average length is computed
l1=float(input("Enter the first approximate length:\n "))
l2=float(input("Enter the second approximate length:\n "))
l=l1+l2
print(f"The average length of the land is {l:.2f} metres\n")

#The user enters the two approximate widths, w1 and w2 and the average width is computed
w1=float(input("Enter the first approximate width:\n "))
w2=float(input("Enter the second approximate width:\n "))
w=w1+w2
print(f"The average width of the land is {w:.2f} metres\n")

#The approximate area of the land is calculated
areaInSquareMetres=l*w
print(f"The approximate area of the land is {areaInSquareMetres:.2f} square metres.")

#converting the area from square metres to decimals
areaInDecimals=areaInSquareMetres/40.46485
print(f"The area of the land in decimals is {areaInDecimals:.2f} decimals")

pricePerDecimal=int(input("Enter the price per decimal of land in the given part of the country:"))
print("The price per decimal of land in the given ")

totalPrice=int(pricePerDecimal*areaInDecimals)
print(f"The total price of the plot of land is {totalPrice}:,")