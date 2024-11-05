class Address implements Cloneable{
    String city;

    Address(String city){
        this.city = city;
    }

    protected Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
}
class Person implements Cloneable{
    String name;
    Address address;

    Person(String name, Address address){
        this.name = name;
        this.address = address;
    }

    protected Object clone() throws CloneNotSupportedException{
        Person clonedPerson = (Person)super.clone();
        clonedPerson.address = (Address)this.address.clone();
        return clonedPerson;
    }
}

class DeepCloning {
    public static void main(String[] args){
        try{
            Address address = new Address("Kampala");
            Person per1 = new Person("George", address);

            Person per2 = (Person)per1.clone();

            System.out.println("Before modification:");
            System.out.println(per1.name + " stays in " + per1.address.city);
            System.out.println(per2.name + " stays in " + per2.address.city);

            System.out.println("After modification:");
            per2.address.city = "Entebbe";
            System.out.println(per1.name + " stays in " + per1.address.city);
            System.out.println(per2.name + " stays in " + per2.address.city);

        }catch(CloneNotSupportedException e){
            e.printStackTrace();
        }
    }
}
