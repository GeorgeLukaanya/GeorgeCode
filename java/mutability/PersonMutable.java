public class PersonMutable {
    private String name;

    public PersonMutable(String name){
        this.name = name;
    }
    
    public String getName(){
        return name;
    }

    public void setName(String newName){
        this.name = newName;
    }

    public static void main(String[] args) {
        PersonMutable person = new PersonMutable("John");
        System.out.println(person.getName());
        person.setName("George");
        System.out.println(person.getName());
    }
}
