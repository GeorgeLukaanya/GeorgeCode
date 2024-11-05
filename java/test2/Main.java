class InvalidAgeException extends Exception{
    InvalidAgeException(String message){
        super(message);
    }
}

class Person{
    int age;

    void setAge(int age) throws InvalidAgeException{
        if(age < 0 || age > 100){
            throw new InvalidAgeException("This age is out of range");
        }
        this.age = age;
    }
}

class Main{
    public static void main(String[] args){
        Person obj = new Person();

        try{
            obj.setAge(101);
            System.out.println("Person is " + obj.age + " years old.");
        }catch(InvalidAgeException e){
            System.out.println("Error: " + e.getMessage());
        }
    }
}