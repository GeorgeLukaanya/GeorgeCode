public final class Point {
    //to demonstrate immutability
    private final int x;
    private final int y;

    public Point(int x, int y){
        this.x = x;
        this.y = y;
    }
    public int getX(){
        return x;
    }
   
    public int getY(){
        return y;
    }

    public static void main(String[] args) {
        Point point = new Point(5, 10);
        System.out.println("X: " + point.getX() + " Y: " + point.getY());
    }
    
}
