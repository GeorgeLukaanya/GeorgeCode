public class FahrenheitToCelcius{
    public static void main(String[] args){
        int saturdayFahrenheit;//declaration
        int sundayFahrenheit;
        saturdayFahrenheit=78;//initialisation/assignment
        sundayFahrenheit=81;
        double saturdayCelcius=(5.0/9)*(saturdayFahrenheit-32);
        double sundayCelcius=(5.0/9)*(sundayFahrenheit-32);
        System.out.println("Weekend Averages. ");
        System.out.println("Saturday: " + saturdayCelcius);
        System.out.println("Sunday: " + sundayCelcius);
    }
}