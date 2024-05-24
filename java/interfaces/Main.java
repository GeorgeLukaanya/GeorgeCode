public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        System.out.printf("Circle perimeter: %.2f", circle.getPerimeter());
        System.out.printf("\nCircle area: %.2f \n", circle.getArea());
    }
}
