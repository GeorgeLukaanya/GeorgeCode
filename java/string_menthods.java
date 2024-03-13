public class string_menthods {
    public static void main(String[] args){
        String name="Lukaanya George";
        String country="Uganda";
        int age=20;
        double gpa=3.5;

        //using format specifiers %d,%f,%s,%c as in C
        String formatted=String.format("My name is %s. I am %d years old.I am from %s and I have a gpa of %.2f", name, age, country, gpa);
        System.out.println(formatted);
        System.out.println(name.length());
        System.out.println(name.isEmpty());
        System.out.println(name.toUpperCase());
        System.out.println(name.toLowerCase());
        System.out.println(name.replace("George", "William"));
        System.out.println(name.contains("eor"));
        

    }
}
public class test {
    public static void main(String[] args){
        String message=new String(" Hello World. ");
        String name="George";
       
        System.out.println(message.endsWith("ld"));
        System.out.println(message.startsWith("Hell"));
        System.out.println(message.length());
        System.out.println(message.indexOf("sky"));
        System.out.println(message.replace("Hello", "George"));
        System.out.println(message.toLowerCase());
        System.out.println(message.trim());
        System.out.println(message.toUpperCase());
        System.out.println(message.substring(2,4
        ));
    }

    @Override
    public String toString() {
        return "test []";
    }
}