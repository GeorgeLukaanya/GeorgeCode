//Implementing an end insert to the array
class endInsert{
    //Function to insert into the array, 
    //returns n+1 when succesful and n on failure
    static int insertAtEnd(int arr[], int n, int key, int capacity){
        if (n >= capacity){
            return n;
        }else{
            arr[n] = key;
            return (n+1);
        }
    }

    public static void main(String[] args) {
        int[] arr = new int[20];
            arr[0] = 12;
            arr[1] = 16;
            arr[2] = 20;
            arr[3] = 40;
            arr[4] = 50;
            arr[5] = 70;
            int capacity = arr.length;
            int n = 6;
            int i, key = 26;
            
            System.out.println("Before insertion: ");
            for(i = 0; i < n; i++){
                System.out.println(arr[i] + " ");
            }

            //Inserting key
            n = insertAtEnd(arr, n, key, capacity);

            System.out.println("\nAfter insertion: ");
            for(i = 0; i < n; i++){
                System.out.println(arr[i] + " ");
            }


    }
}