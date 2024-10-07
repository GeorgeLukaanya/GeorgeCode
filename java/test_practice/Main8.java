
class Az {
    int a;
    int b;
}

class Bz implements Cloneable {
    int x;
    int y;
    Az n = new Az(); // Initialize Az instance

    public Object clone() throws CloneNotSupportedException {
        return super.clone(); // Shallow clone
    }
}

class Main8 {
    public static void main(String[] args) throws CloneNotSupportedException {
        Bz m = new Bz();
        m.x = 10;           // Set values for x
        m.y = 20;           // Set values for y
        m.n.a = 30;         // Set value for Az's a
        m.n.b = 40;         // Set value for Az's b
        try{
            Bz p = (Bz) m.clone(); // Clone object m
            p.n.b = 50;            // Change value of b in the cloned Az instance

            // Output the values
            System.out.println("Original Az a: " + m.n.a); // Should print 30
            System.out.println("Original Az b: " + m.n.b); // Should print 50 (because it's shared)
            System.out.println("Cloned Az a: " + p.n.a);    // Should print 30
             System.out.println("Cloned Az b: " + p.n.b);    // Should print 50
        }catch(CloneNotSupportedException e){
            e.printStackTrace();
        }
        
    }
}
