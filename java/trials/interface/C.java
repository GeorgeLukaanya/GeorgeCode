public class C implements A, B{
    public void mA(String a){
        System.out.println("My name is " + a);
    }
    public double mB(int b){
        return b * b * b;
    }
    public static void main(String[] args) {
        System.out.println("The numbers are " + A.K + " and " + B.K);
    C obj = new C();
    obj.mA("George");
    System.out.println("The cube of " + 4 + " is " + obj.mB(4));
    }
}