class Animal{
    void a(){
        System.out.println("This is animal A.");
    }
}
class AnonymousInner {
    public static void main(String[] args) {
        Animal annony = new Animal(){
            void a(){
                System.out.println("This is b.");
            }
        };
        annony.a();
    }
}
