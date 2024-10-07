public class Person implements Cloneable{
    private String name;
    private int age;

    public Person(String name, int age){
        this.name = name;
        this.age = age;
    }

    //Overriding the clone() method
    @Override
    protected Object clone() throws CloneNotSupportedException{
        return super.clone();//SHallow copy
    }

    //getter and setter methods
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    public int getAge(){
        return age;
    }
    public void setAge(int age){
        this.age = age;
    }
    public void display(){
        System.out.println("Name: " + name + " Age: " + age);
    }

}