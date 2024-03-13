import java.util.Arrays;

public class array {
    public static void main(String[] args){
        /*int[] numbers=new int[5];
        numbers[0]= 1;
        numbers[1]=2;
        numbers[2]=3;
        numbers[3]=4;
        
        System.out.println(Arrays.toString(numbers));*/
        int[] numbers={5, 3, 1, 2, 5};
        int startingIndex=1;
        int endingIndex=4;//not included 
        //System.out.println(numbers.length);
        Arrays.sort(numbers);
        int key=1;
         int foundItemIndex=Arrays.binarySearch(numbers, key);
        System.out.println(Arrays.toString(numbers));
        System.out.println(numbers.length);
        System.out.println(foundItemIndex);



    }
}
