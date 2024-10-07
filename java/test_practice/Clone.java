class Person implements Cloneable {
    String name;
    int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Override the clone() method
    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();  // Shallow copy
    }
}

class Clone{
    public static void main(String[] args){
        Person original = new Person("Khemical", 22);
        System.out.println("Name: " + original.name + " Age: " + original.age);

        Person cloned = (Person)original.clone();
        System.out.println("Name: " + cloned.name + " Age: " + cloned.age);

        cloned.name = "George";
        System.out.println("Name: " + cloned.name + " Age: " + cloned.age);


    }
}