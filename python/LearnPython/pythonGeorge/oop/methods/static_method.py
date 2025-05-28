# Static methods are independent functions grouped inside a class for organization.
# They don't access self or cls.

class Math:
    @staticmethod
    def add(x, y):
        return x + y
    
print(Math.add(3,4))