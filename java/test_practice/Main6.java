public class Main6 {
 <U> void show(U shows){
        System.out.println("This method shows "+shows);
    }
    public static void main(String[] args){
        Main6 obj = new Main6();
        obj.show(67);
        obj.show(235.566);
        obj.show("Musheija");
    }

}

