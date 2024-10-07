class People implements Cloneable {
    private String name;
    private int age;
    int[] scores;  // Mutable object (array)

    public People(String name, int age, int[] scores) {
        this.name = name;
        this.age = age;
        this.scores = scores;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();  // Shallow copy
    }

    public void display() {
        System.out.print("Name: " + name + ", Age: " + age + ", Scores: ");
        for (int score : scores) {
            System.out.print(score + " ");
        }
        System.out.println();
    }
}

public class MutableShallow {
    public static void main(String[] args) {
        try {
            int[] scores = {90, 80, 70};
            People original = new People("John", 25, scores);
            original.display();

            // Shallow cloning
            People cloned = (People) original.clone();
            cloned.display();

            // Modify the cloned object's array (scores)
            cloned.scores[0] = 100;  // Changing the first score

            System.out.println("After modifying the cloned object's scores:");

            // Check the original object
            original.display();  // The original is affected!
            cloned.display();    // Cloned object with changes

        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
