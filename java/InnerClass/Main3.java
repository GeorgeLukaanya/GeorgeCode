class A{
    void show(){
        class B{
            void display(){
                System.out.println("George");
            }
        }
        B b = new B();
        b.display();
    }
}

class Main3{
    public static void main(String[] args){
        A a = new A();
        a.show();
    }
}