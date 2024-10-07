class Person<T>{
    T age;
    T indexNumber;

    Person(T age, T indexNumber){
        this.age = age;
        this.indexNumber = indexNumber;
    }
}
class generic1 {
    public static void main(String[] args) {
        Person<Integer> obj = new Person<>(20, 2300);
        obj.age = 30;

        System.out.println("My index number is " + obj.indexNumber + " and I am " + obj.age + " years old.");
    }
}
