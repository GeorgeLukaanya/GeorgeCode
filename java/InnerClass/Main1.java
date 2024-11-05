//non static inner class
class A{
    private String name = "class A String";

    class B{
        void display(){
            System.out.println(name);
        }
    }
}

class Main1{
    public static void main(String[] args){
        A a = new A();
        A.B obj = a.new B();
        obj.display();
    }
}