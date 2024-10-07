public class Intern {
    //To demonstrate string interning
    public static void main(String[] args) {
        String s1 = "Hello";     // String literal, stored in the String Pool
        String s2 = "Hello";     // Reuses the string from the pool
        String s3 = new String("Hello"); // Creates a new String object in the heap
        
        System.out.println(s1 == s2); // true, because they refer to the same string in the pool
        System.out.println(s1 == s3); // false, because s3 is a new object in the heap
        
        // Interning s3
        s3 = s3.intern(); // Now s3 refers to the string in the pool
        System.out.println(s1 == s3); // true, because both now refer to the string in the pool
    }
}
