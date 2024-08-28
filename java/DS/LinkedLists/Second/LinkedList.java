class LinkedList{
    Node head; //The first node

    //Constructir for empty linked list
    LinkedList(){
        this.head = null;
    }

    //Insering new node to end
    void insert(int data){
        Node newNode = new Node(data);
        if (head == null){
            head = newNode; //New node becomes head when head is empty
        }else{
            Node current = head;
            while(current.next != null){
                current = current.next;// Traverse to the end of the list
            }
            current.next = newNode;//insert new node at the end
        }
    }

    //remove duplicates of a specific key
    void removeDuplicates(int key){
        if(head == null){
            return;
        }
        //These are pointers to traverse the list
        Node current = head;
        Node previous = null;

        while(current != null){
            if(current.data == key){
                if(previous != null && previous.data == key){
                    previous.next = current.next; //Skip the duplicate
                }else{
                    previous = current; //Update previous for non-key node
                }
                current = current.next;//move to next node
            }
        }
    }

    //to reverse the list
    Node reverse(){
        Node previous = null;
        Node current = head;
        Node next = null;

        while(current != null){
            next = current.next;//store next node
            current.next = previous; //reverse link
            previous = current;//move previous to current node
            current = next;//move to the next node
        }
        head = previous; //head becomes the new first node
        return head; //return new head
    }

    void printList(){
        Node current = head;
        while(current != null){
            System.out.println(current.data + " ->");
            current = current.next;
        }
        System.out.println("Null");
    }
}