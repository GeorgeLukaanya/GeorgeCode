interface A{
    public void display();
}

class Main4{
    public static void main(String[] args){
        A a = new A(){
            public void display(){
                System.out.println("George");
            }
        };
        a.display();
    }
}