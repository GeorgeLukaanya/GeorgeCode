class Clone2 implements Cloneable {
        //variables
    String name;
    int version;
    public static void main(String[] args) {
        Clone2  obj = new Clone2();
        obj.name = "George";
        obj.version = 6;

        System.out.println(obj.name);
        System.out.println(obj.version);

        try {
            Clone2 obj1 = (Clone2)obj.clone();
            obj1.name = "William";

            System.out.println(obj.name);
            System.out.println(obj1.name);
            System.out.println(obj1.version);
            
        } catch (Exception e) {
            System.out.println(e);
        }

    }
}
