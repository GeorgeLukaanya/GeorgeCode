class anyInsert{
    static void insertAny(int arr[], int n, int x, int pos){
        //shift elements to the righ whch are to the right of the position
        for(int i = n - 1; i >= pos; i--){
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
    }
    public static void main(String[] args) {
        int arr[] = new int[15];
        arr[0] = 2;
        arr[1] = 4;
        arr[2] = 1;
        arr[3] = 8;
        arr[4] = 5;
        int n = 5;
        int x = 10, pos = 2;

        System.out.println("Before insertion: ");
        for (int i = 0; i < n; i++){
            System.out.println(arr[i] + " ");
        }

        //inserting at specific position
        insertAny(arr, n, x, pos);
        n += 1;

        System.out.println("\n\n After Insertion");
        for(int i = 0; i < n; i++){
            System.out.println(arr[i] + " ");
        }
    }
}