#Error handling
'''Types
Here’s what each error type means:

-Syntax error:  
  Mistakes in the code structure (e.g., missing colon, misspelled keywords). Python can’t interpret the code and stops execution.

-Runtime error:  
  Errors that occur while the program is running (e.g., dividing by zero, accessing a missing file).

-Logical error:  
  The program runs without crashing, but the output is incorrect due to a mistake in logic (e.g., using the wrong formula).
'''

'''
    try:
        # Code that might cause an error
    except SomeError:
        # Code that runs if an error happens
    else:
        # Code that runs if no error happens
    finally:
        # Code that always runs, no matter what

'''

a = int(input("Enter the first number: "))
b = int(input("Enter the first number: "))
try:
    result = a / b
except ZeroDivisionError:
    print("Tokola Error, you cannot divide by zero")
else:
    print(f"{a}/{b}={result}")
finally:
    print("Execution complete.")
    

