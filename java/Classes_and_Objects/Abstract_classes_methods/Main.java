//Abstract class
abstract class Shape{
    //Abstract methods
    abstract double area();
    abstract double perimeter();
}

//Concrete subclass 1
class Circle extends Shape{
    private double radius;

    //Constructor
    Circle(double radius){
        this.radius=radius;
    }

    //implementing the abstract methods
    @Override
    double area(){
        return Math.PI * radius * radius;
    }

    @Override
    double perimeter(){
        return 2 * Math.PI * radius;
    }
}

//Concrete superclass 2
class Rectangle extends Shape{
    private double length;
    private double width;

    Rectangle(double length, double width){
       this.length=length;
       this.width=width;
    }

    @Override
    double area(){
        return length * width;
    }

    @Override
    double perimeter(){
        return 2 * (length + width);
    }
}

//The Main class
public class Main{
    public static void main(String[] args) {
        //Creating objects of concrete classes
        Circle circle1 = new Circle(5);
        Rectangle rectangle1 = new Rectangle(4, 6);

        //Calling methods
        System.out.println("Circle area: " + circle1.area());
        System.out.println("Circle perimeter: " + circle1.perimeter());
        System.out.println("Rectangle area: " +  rectangle1.area());
        System.out.println("Rectangle perimeter: " +  rectangle1.perimeter());
    }
}
