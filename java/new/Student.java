public class Student {
  // Demonstrating method overloading
  // Done in the same class

  public void add(double x, int y) {
    System.out.println(x + y);
  }

  public static int add(int x) {
    return x;
  }

  private int add(int y, int h, int v) {
    int w = y + h + v;
    return w;
  }

  public static void main(String[] args) {
    // This is the entry point for execution.
    // static mehtod belongs to the class while non-static to objects of the class
    // static keyword comes after the visibility modifier
    // they belong to the class so all objects of that class take them on hence
    // can't be overriden

    Student George = new Student();
    System.out.println(George.add(3, 4, 5));
    int x = add(4);
    System.out.println(x);

  }
}
