class Father{
    String name;

    class Son{
        int age;
    }
}

class Main{
    public static void main(String[] args){
        Father father = new Father();
        father.name = "Karungi";
        System.out.println(father.name);

        Father.Son son = father.new Son();
        son.age = 89;
        System.out.println(son.age);
    }
}