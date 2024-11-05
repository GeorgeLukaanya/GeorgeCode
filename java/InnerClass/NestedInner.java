class OuterClass{
    private String message= "My name is George";

    class InnerClass{
        void display(){
            System.out.println("What is your name?\n " + message);
        }
    }
}
class NestedInner{
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        OuterClass.InnerClass inner = outer.new InnerClass();
        inner.display();
    }
}