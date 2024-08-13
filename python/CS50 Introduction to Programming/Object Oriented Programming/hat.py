import random

#implementing a sorting hat
class Hat:
    def __init__(self):
        self.houses = ["Entebbe", "Kampala", "Kisaasi", "Kawempe"]
    
    def sort(self, name):
        #randomising the houses list values
        house = random.choice(self.houses)
        print(f"{name} is in {house}")


hat = Hat()
hat.sort("Harry")