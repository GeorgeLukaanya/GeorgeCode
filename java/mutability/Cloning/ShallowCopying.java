class ShallowCopying{
    int i;
    int j;

    @Override
    public String toString(){
        return "i = " + i + "  and j = " + j;
    }

    public static void main(String[] args) {
        ShallowCopying obj = new ShallowCopying();
        obj.i = 5;
        obj.j = 6;

        ShallowCopying obj1 = obj;//copying the whole reference      
        //changing values here manipulates the whole reference
        /*
         * obj.i = 8;
         */

        System.out.println(obj);
        System.out.println(obj1);
    }
}