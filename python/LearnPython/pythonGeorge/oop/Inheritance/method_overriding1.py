class Vehicle:
    def start(self):
        print("Starting vehicle ..")
        
class Car(Vehicle):
    def start(self):
        super().start()  # call parent version
        print("Starting car engine ..")
        
v = Vehicle()
v.start()

c = Car()
c.start()