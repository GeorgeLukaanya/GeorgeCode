class A{
    public void m(String S){
        System.out.println(S);
    }
}

class B{
    public void m(int x){
        System.out.println(d);
    }
}

public class C extends B{
    public void m(double d){
        System.out.println(d);
    }

    public static void main(String[] args) {
        new C().m(20);
    }
}

