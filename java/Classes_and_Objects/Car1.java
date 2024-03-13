public class Car1 {
    int modelYear;
    String modelName;

    public Car1(int year, String name){
        modelName=name;
        modelYear=year;
    }

    public static void main(String[] args) {
        Car1 car1=new Car1(1969, "Mustang");
        System.out.println(car1.modelYear + " " + car1.modelName);
    }
}
