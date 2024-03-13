public class type_conversion {
    public static void main(String[] args){
       //implicit: where the compiler converts to the larger
        int num1=5;
        double num2=num1;

        System.out.println(num2);

        //explicit
        double num3=5;
        int num4=(int)num1;

        System.out.println(num4);
    }
    
}
