//Program to demonstrate constructor overloading.
class Person {
    String name;
    int age;

    //The first constructor 
    Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    //The overloaded cobstructor
    Person(String name){
        this.name = name;
        this.age = 0;
    }

    public static void main(String[] args){
        Person object1 = new Person("George", 21);
        Person object2 = new Person("John");
        System.out.println("My name is " + object1.name + " and I am " + object1.age + " years old.");
        System.out.println("My name is " + object2.name + " and I am " + object2.age + " years old.");
    }
}