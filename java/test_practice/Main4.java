class Vehicle{
    void moves(){
        System.out.println("Vehicle moves");
    }
}
class Car extends Vehicle{
    void moves(){
    System.out.println("Car moves very fast");
    }
}
class Main4 {
    public static void main(String[] args){
        Vehicle obj = new Car();
        obj.moves();
    }
    
}
