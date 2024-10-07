class Vehicle{
    public void moves(){
        System.out.println("The vehicle is for transport");
    }
}
class Annony {
    public static void main(String[] args) {
        Vehicle v = new Vehicle(){
            public void moves(){
                System.out.println("This vehicle is for luxury");
            }

        };
        v.moves();
    }
    
}
