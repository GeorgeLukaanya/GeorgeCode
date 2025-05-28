class Vehicle:
    def start_engine(self):
        return "Generic engine starting..."

class Car(Vehicle):
    def start_engine(self):
        return "Petrol engine revving up!"

class ElectricCar(Vehicle):
    def start_engine(self):
        return "Electric motor humming quietly!"

class HybridCar(Car, ElectricCar):  # Multiple inheritance
    pass

# Usage
hybrid = HybridCar()
print(hybrid.start_engine())  # Output: Petrol engine revving up!
print(HybridCar.__mro__)      