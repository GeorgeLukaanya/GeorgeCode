# In other languages like Java or C++, method overloading means 
# having multiple methods with the same name but different parameters.

# But in Python, you cannot define multiple methods with the same name
# in the same class — the last one will overwrite the earlier ones.

class Demo:
    def show(self):
        print("No arguments")

    def show(self, x):
        print(f"One argument: {x}")

d = Demo()
d.show()       # Error if no argument — the first method is overwritten
