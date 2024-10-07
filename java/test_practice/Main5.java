class Animal<T>{
    T size;
    T name;
    public Animal (T size,T name){
        this.size = size;
        this.name = name;
    }}
class Main5{
        public static void main(String[] args){
            Animal<T> obj = new Animal<T>("20","40");

            Animal<Double> obj1 = new Animal<Double>(30.2,311003378547.456);
            System.out.println(obj1.name);
            System.out.println(obj.size);
        }
    }
