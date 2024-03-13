class Vehicle {
    protected String brand="Ford";
    public void honk(){
        System.out.println("Tuut, tuut!");
    }
}

class Car extends Vehicle{
    private String modelName = "Mustang";
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.honk();
        System.out.println(car1.brand + " " + car1.modelName);
    }
}


