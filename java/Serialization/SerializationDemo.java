import java.io.*;

class Employee implements Serializable {
    private String name;
    private int age;

    public Employee(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String toString() {
        return "Employee{name='" + name + "', age=" + age + "}";
    }
}

class SerializationDemo {
    public static void main(String[] args) {
        Employee employee = new Employee("John Doe", 30);

        // Serialization
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("employee.ser"))) {
            oos.writeObject(employee);
            System.out.println("Serialized Employee: " + employee);
        } catch (IOException e) {
            e.printStackTrace();s
        }

        // Deserialization
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("employee.ser"))) {
            Employee deserializedEmployee = (Employee) ois.readObject();
            System.out.println("Deserialized Employee: " + deserializedEmployee);
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
