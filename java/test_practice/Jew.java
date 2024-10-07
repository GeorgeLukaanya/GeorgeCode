//This demonstrates string interning
class Jew{
public static void main(String[] args){
    String a = "Wakinya";
    String b = "Wakinya";
    String c = new String("Wakinya");
    c = c.intern();
    String d = a.intern();
    System.out.println(a == b);
    System.out.println(a.equals(b));
    System.out.println(d == c);
    System.out.println(a.equals(c));


}

}