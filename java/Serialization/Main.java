import java.io.*;

class Employee implements Externalizable {
    static final long serialVersionUID = 1L;
    String name;
    int id;

    // Required default constructor for Externalizable
    public Employee() {}

    public Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    @Override
    public void writeExternal(ObjectOutput out) throws IOException {
        out.writeObject(name);
        out.writeInt(id);
    }

    @Override
    public void readExternal(ObjectInput in) throws IOException, ClassNotFoundException {
        name = (String) in.readObject();
        id = in.readInt();
    }
}

public class Main {
    public static void main(String[] args) {
        Employee emp = new Employee("Alice", 101);
        
        // Serialization
        try (FileOutputStream fos = new FileOutputStream("employee.ext");
             ObjectOutputStream oos = new ObjectOutputStream(fos)) {
            oos.writeObject(emp);
            System.out.println("Employee object has been serialized.");
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Deserialization
        try (FileInputStream fis = new FileInputStream("employee.ext");
             ObjectInputStream ois = new ObjectInputStream(fis)) {
            Employee deserializedEmp = (Employee) ois.readObject();
            System.out.println("Employee object has been deserialized.");
            System.out.println("Name: " + deserializedEmp.name + "ID: " + deserializedEmp.id);
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
