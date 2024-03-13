public class Person {
    String fname="John";
    String lname="Doe";
    int age = 24;

    public static void main(String[] args){
        Person person1 = new Person();
        System.out.printf("Name: %s %s", person1.fname, person1.lname);
        System.out.printf("\nAge: %d", person1.age);
    }
    
}
