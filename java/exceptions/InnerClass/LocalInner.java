class A{
    void read(){
        System.out.println("Reading books");
        class B{
            void play(){
                System.out.println("Playing football");
            }
            }
            B b = new B();
            b.play();
    }
}
class LocalInner {
    public static void main(String[] args){
        A a = new A();
        a.read();
    }

    
}
