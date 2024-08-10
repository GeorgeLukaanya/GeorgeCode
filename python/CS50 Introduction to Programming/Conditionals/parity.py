def main():
    x = int(input("Enter a number: "))
    if is_even(x):
        print("Even")
    else:
        print("Odd")

def is_even(n):
    return n%2==0

#return True if n%2==0 else False

'''
    if n%2 == 0:
        return True
    else:
        return False
'''
 
main()