public class OperatorExample {
    public static void main(String[] args) {
        int x = 5;
        int y = 5;

        // Postfix increment and decrement
        int result1 = x++;
        int result2 = y--;

        System.out.println("Postfix Increment: " + result1); // Output: 5
        System.out.println("Postfix Decrement: " + result2); // Output: 5

        int result5 = x;
        int result6 = y;
        System.out.println(result5);
        System.out.println(result6);
        // Prefix increment and decrement
        int result3 = ++x;
        int result4 = --y;

        System.out.println("Prefix Increment: " + result3); // Output: 7
        System.out.println("Prefix Decrement: " + result4); // Output: 4
    }
}
