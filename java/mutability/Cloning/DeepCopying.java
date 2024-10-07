public class DeepCopying {
    int i;
    int j;

    @Override
    public String toString(){
        return "i = " + i + "  and j = " + j;
    }

    public static void main(String[] args) {
        DeepCopying obj = new DeepCopying();
        obj.i = 5;
        obj.j = 6;

        DeepCopying obj1 = new DeepCopying();
        obj1.i = obj.i;
        obj1.j = obj.j;

        obj1.i = 8;

        System.out.println(obj);
        System.out.println(obj1);
    }
}
