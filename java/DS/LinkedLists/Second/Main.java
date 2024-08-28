public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Insert elements into the list
        list.insert(10);
        list.insert(20);
        list.insert(20);
        list.insert(30);
        list.insert(20);
        list.insert(40);

        // Print the original list
        System.out.println("Original List:");
        list.printList(); // Output: 10 -> 20 -> 20 -> 30 -> 20 -> 40 -> null

        // Remove duplicates of the key 20
        list.removeDuplicates(20);

        // Print the list after removing duplicates
        System.out.println("List after removing duplicates of 20:");
        list.printList(); // Output: 10 -> 20 -> 30 -> 40 -> null

        // Reverse the list
        list.reverse();

        // Print the reversed list
        System.out.println("Reversed List:");
        list.printList(); // Output: 40 -> 30 -> 20 -> 10 -> null
    }
}
