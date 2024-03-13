
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
        System.out.printf("Hello %s, you are a good boy\n", name);
        System.out.println(message.substring(2, 4));
        System.out.println(message.concat(name));

    
    }
    
}
