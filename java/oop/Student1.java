public class Student1{
    //public instance variables
    public String name;
    public int age;
    public double grade;

    //Constructor to initialise instance variables
    public Student1(String studentName, int studentAge, double studentGrade){
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }

    //Method to display student information
    public void displayStudentInformation(){
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
        System.out.println("Student Grade: " + grade);
    }

    public static void main(String[] args){
        //Creating an instance of the Student class with constructor
        Student1 student1 = new Student1("Musheija Abraham", 20, 85.5);

        //Directly accessing and modifying classes
        student1.name = "George";
        student1.age = 20;
        student1.grade = 90.0;
        
        //Displaying updated student information
        System.out.println("Updated Student Information");
        student1.displayStudentInformation();
    }
}