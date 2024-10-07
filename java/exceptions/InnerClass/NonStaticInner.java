class Outer{
    private String name = "George";

    class Inner{
        void printName(){
            System.out.println("My name is " + name);
        }
    }
}
 class M{
    public void sing(){
        System.out.println("Choir is singing");
    }
    class K{
        public void dance(){
            System.out.println("Dancing like MJ");
        }
    }
 }
class NonStaticInner{
    public static void main(String[] args) {
        Outer obj = new Outer();
        Outer.Inner obj1 = obj.new Inner();
        obj1.printName();
        M m = new M();
        m.sing();
        M.K k = m.new K();
        k.dance();
    }
}