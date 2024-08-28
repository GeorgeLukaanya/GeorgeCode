//Representing a single element in a linked list
public class Node {
    int data;      //Data stored in node
    Node next;    //Reference to next node in list

    //Consructor to create a new node
    Node(int data){
        this.data = data;
        this.next = null; //initilaly, next node is null
    }
}
