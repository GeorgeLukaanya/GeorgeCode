public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Insert elements into the list
        list.insert(10);
        list.insert(20);
        list.insert(30);

        // Print the list
        list.printList(); // Output: 10 -> 20 -> 30 -> null

        // Delete an element from the list
        list.delete(20);

        // Print the list again
        list.printList(); // Output: 10 -> 30 -> null
    }
}
