public class LinkedList {
    Node head;    //head of the list(first node)

    //Constructor to create an empty linked list
    public LinkedList() {
        this.head = null;
    }
    
    //Method to insert a new node at the end
    void insert(int data){
        Node newNode = new Node(data);
        if (head == null){
            head = newNode;//The newNode becomes the head
        }else{
            Node current = head;
            while(current.next != null){
                current = current.next; //Traverse to the end of list
            }
            current.next = newNode; //insert new node at the end
        }
    }

    //Method to delete a node with a specific value
    void delete(int value){
        if(head == null){
            return;//List is empty
        }

        //if head needs to be removed
        if (head.data == value){
            head = head.next;
            return;
        }

        Node current = head;
        while(current.next != null && current.next.data != value){
            current = current.next;
        }
        
        //Node to delete is found
        if(current.next != null){
            current.next = current.next.next; //remove the node
        }
    }

    //traverse and print 
    void printList(){
        Node current = head;
        while(current != null){
            System.out.println(current.data + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }
    
}

