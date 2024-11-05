//static inner classes
class A{
    private static String name = "class A static string";

    static class B{
        void display(){
            System.out.println(name);
        }
    }
}

class Main2{
    public static void main(String[] args){
        A.B obj = new A.B();
        obj.display();
    }
}