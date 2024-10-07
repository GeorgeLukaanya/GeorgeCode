 class A {
    public A(){
        System.out.println("This is clean");
    }
}
class B extends A{
    public B(){
        super();
        System.out.println("This is what i mean");
    }
}
class C extends B{
    public C(){
        //super();
        System.out.println("Its a Sunday");
    }

}    

class Main7{
    public static void main(String[] args){
        //A obj = new B ();
        C obj = new C();
        

    }
}
