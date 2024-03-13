public class MyClass1 {
    int x=5;

    public static void main(String[] args){
        MyClass1 myObj = new MyClass1();
        MyClass1 myObj1=new MyClass1();
        myObj.x=10;
        myObj1.x=45;
        System.out.println(myObj.x);
        System.out.println(myObj1.x);
    }
}
