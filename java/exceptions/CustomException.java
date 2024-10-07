class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class CustomException {
    public static void validateAge(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Age is not valid, must be 18 or older.");
        } else {
            System.out.println("Valid age");
        }
    }

    public static void main(String[] args) {
        try {
            validateAge(16);  // Throws custom InvalidAgeException
        } catch (InvalidAgeException e) {
            System.out.println("Caught exception: " + e.getMessage());
        }
    }
}
