final class Car {
    private String color;

    public Car(String color) {
        this.color = color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }
}

public class Main {
    public static void main(String[] args) {
        Car car = new Car("Red");
        System.out.println("Initial Color: " + car.getColor()); // Output: Red
        
        // Changing the state of the car object
        car.setColor("Blue");
        System.out.println("New Color: " + car.getColor()); // Output: Blue
    }
}
