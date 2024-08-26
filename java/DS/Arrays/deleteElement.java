

class deleteElement {
    //Function to search the key to be deleted
    static int findElement(int arr[], int n, int key){
        for(int i = 0; i < n; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
    static int deleteElement(int arr[], int n, int key){
        //find position of element to be deleted
        int pos = findElement(arr, n, key);

        if (pos == -1){
            System.out.println("Element not found.");
            return n;
        }

        for(int i = pos; i < n - 1; i++){
            arr[i] = arr[i + 1];
        }
        return n - 1;
    }

    public static void main(String[] args) {
        int i;
        int arr[] = {10, 50, 30, 40, 20};

        int n = arr.length;
        int key = 30;

        System.out.println("Array before deletion");
        for(i = 0; i < n; i++){
            System.out.println(arr[i] + " ");
        }
        //function call
        n = deleteElement(arr, n, key);

        System.out.println("\n\nArray after deletion");
        for(i = 0; i < n; i++){
            System.out.println(arr[i] + " ");
        }
    }
}
