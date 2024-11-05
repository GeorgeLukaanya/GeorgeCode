import java.io.*;
class Employee implements Serializable{
    private static final long serialVersionUID = 1L;
    String name;
    int id;

    Employee(String name, int id){
        this.name = name;
        this.id = id;
    }
}

class SerializationExample{
    public static void main(String[] args){
        Employee emp = new Employee("George", 21);

        //Serialization
        try(FileOutputStream file = new FileOutputStream("employee.ser");
        ObjectOutputStream out = new ObjectOutputStream(file)){
            out.writeObject(emp);
            System.out.println("Employee object has been serialized.");
        }catch(IOException e){
            e.printStackTrace();
        }
        //Deserialisation
        try(FileInputStream file = new FileInputStream("employee.ser");
        ObjectInputStream in = new ObjectInputStream(file)){
            //Read from file
            Employee deserialEmployee = (Employee)in.readObject();
            System.out.println("Employee has been deserialised");
            System.out.println(deserialEmployee.name);
            System.out.println(deserialEmployee.id);
        }catch(IOException | ClassNotFoundException e){
            e.printStackTrace();
        }
    }
}