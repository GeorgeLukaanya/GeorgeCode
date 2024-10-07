public class ShallowClone {
    public static void main(String[] args) {
        try {
            //Create original
            Person original = new Person("George", 20);
            original.display();

            //clone the object
            Person clone = (Person) original.clone();
            clone.display();

            //modify clone object
            clone.setName("William");
            clone.setAge(30);

            System.out.println("After modification");
            original.display();
            clone.display();
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
