interface InnerAnonymousInner {
    void sayHello();    
} 
    
public class AnonymousInner {
    public static void main(String[] args) {
        // Anonymous inner class implementing the abstract method of Greeting
        Greeting greeting = new Greeting() {
            void sayHello() {
                System.out.println("Hello from Anonymous Inner Class!");
            }
        };
        greeting.sayHello();
    }
}
