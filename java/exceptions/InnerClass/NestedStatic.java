class A{
    public void work(){
        System.out.println("He is working");
    }
    static class B{
        public void walk(){
            System.out.println("He is walking");
        }

    }
}
class NestedStatic {
    public static void main(String[] args){
        A obj = new A ();
        obj.work();
        A.B obj1 = new A.B();
        obj1.walk();
    }


    
}
