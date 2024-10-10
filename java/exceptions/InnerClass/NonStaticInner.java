class Outer{
    private String name = "George";

    class Inner{
        void printName(){
            System.out.println("My name is " + name);
        }
    }
}
class NonStaticInner{
    public static void main(String[] args) {
        Outer obj = new Outer();
        Outer.Inner obj1 = obj.new Inner();
        obj1.printName();
    }
}