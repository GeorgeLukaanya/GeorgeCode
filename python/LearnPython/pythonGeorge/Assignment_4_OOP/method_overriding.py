class Vehicle:
    def start_engine(self):
        return "Generic engine starting..."

class Car(Vehicle):
    def start_engine(self):  # Overrides parent method
        return "Petrol engine revving up!"

class ElectricCar(Vehicle):
    def start_engine(self):  # Overrides parent method
        return "Electric motor humming quietly!"

# Usage
car = Car()
electric_car = ElectricCar()
print(car.start_engine())  # Output: Petrol engine revving up!
print(electric_car.start_engine())  # Output: Electric motor humming quietly!