//This is to demonstrate STring interning
class Main1 {
    public static void main(String[] args){
        String a = "Sunday";
        String b = "Sunday";
        String c = new String ("Sunday");
        c = c.intern();
        String d = a.intern();
        System.out.println(a==b);
        System.out.println(a.equals(b));
        System.out.println(a.equals(c));
        System.out.println(a==c);
        System.out.println(a==d);
        System.out.println(d.equals(a));

    }

    
}   
