//This is to demonstrate Upcasting and Downcasting
class Father{
    void attendMeeting(){
        System.out.println("Attends a meeting");
    }
}
class Son extends Father{
    void beachParty(){
        System.out.println("Goes to the party");
    }
}




class Main3 {
    public static void main(String[] args){
        Father obj = new Son();
        Son obj1 = (Son)obj;
        obj1.beachParty();

        obj.attendMeeting();
    }

    
}
