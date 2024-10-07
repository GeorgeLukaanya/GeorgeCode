class Person<T>{
    T name;
    T id;

    Person(T name, T id){
        this.name = name;
        this.id = id;
    }
}

class Gen{
    public static void main(String[] args){
        Person<String> obj = new Person<String>("George", "12343434");
        System.out.println(obj.name + " " + obj.id);

        Person<Integer> obj2 = new Person<Integer>(21, 23);
        System.out.println(obj2.name + " " + obj2.id);
    }
}