class IllegalAgeException extends RuntimeException{
    IllegalAgeException(String message){
        super(message);
    }
}

class ThrowExample{
    public static void main(String[] args) {
        int age = 15;
        if(age < 18){
            throw new IllegalAgeException("Your age is too low. ");
        }else{
            System.out.println("You are allowed to vote. ");
        }
    }
}