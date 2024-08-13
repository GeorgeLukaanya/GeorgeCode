#implementing class methods
#we don't use self here 
#when there's no objects

import random

class Hat:
    #this is a class variable
    houses = ["Entebbe", "Kampala", "Kisaasi", "Kawempe"]
    
    @classmethod
    def sort(cls, name):
        #randomising the hou ses list values
        house = random.choice(cls.houses)
        print(f"{name} is in {house}")
 

Hat.sort(input("Name :"))
 