class Dog:
    species = "Canine"
    
    @classmethod
    def get_species(cls):
        return cls.species
    
print(Dog.get_species())  # Canine
# an object shouldn't be declared to access the class variable
#Class methods work with class-level data, not instance-level.

