class A implements Z{
    public double mX(int x){
        return x*x;
    }

    public void mY(String y){
        System.out.println(y + " is a good name.");
        System.out.println(Z.KZ + " is your GPA");
    }
    public static void main(String[] args){
        A object = new A();
        object.mY("George");
        System.out.println("The square of " + X.KX + " is " + object.mX(X.KX));
    }
}