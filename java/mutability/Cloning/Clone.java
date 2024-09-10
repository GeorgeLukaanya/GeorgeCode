class Clone implements Cloneable{
    //variables
    String name;
    int version;
    public static void main(String[] args) {
        Clone  obj = new Clone();
        obj.name = "George";
        obj.version = 6;

        System.out.println(obj.name);
        System.out.println(obj.version);

        try {
            Clone obj1 = (Clone)obj.clone();

            System.out.println(obj1.name);
            System.out.println(obj1.version);
            
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}