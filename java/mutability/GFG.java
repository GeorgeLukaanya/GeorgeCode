// Java program to illustrate
// intern() method
class GFG {
    public static void main(String[] args)
    {
        // S1 refers to Object in the Heap Area
        // Line-1
        String s1 = new String("GFG");

        // S2 refers to Object in SCP Area
        // Line-2
        String s2 = s1.intern();

        // Comparing memory locations
        // s1 is in Heap
        // s2 is in SCP
        System.out.println(s1 == s2);

        // Comparing only values
        System.out.println(s1.equals(s2));

        // S3 refers to Object in the SCP Area
        // Line-3
        String s3 = "GFG";

        System.out.println(s2 == s3);
    }
}
