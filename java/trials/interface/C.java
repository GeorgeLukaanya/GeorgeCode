public class C implements A, B {
    public void mA(String a) {
        System.out.println("My name is " + a);
    }

    public double mB(int b) {
        return b * B.K * A.K;
    }

    public static void main(String[] args) {
        C object = new C();
        object.mA("George");
        System.out.println(object.mB(2));
        object.mD();
    }
}