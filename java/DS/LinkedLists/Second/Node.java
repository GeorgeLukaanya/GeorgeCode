class Node {
    int data;       // Data stored in the node
    Node next;      // Reference to the next node in the list

    // Constructor to create a new node
    Node(int data) {
        this.data = data;
        this.next = null; // Initially, the next node is null
    }
}
