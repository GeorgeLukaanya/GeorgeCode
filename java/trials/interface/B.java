interface B{
    double K = 2.5;
    double mB(int b);
    default void mD(){
        System.out.println("I am a student");
    }
}