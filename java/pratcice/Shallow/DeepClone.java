class Persons implements Cloneable {
    private String name;
    private int age;
    int[] scores;

    public Persons(String name, int age, int[] scores) {
        this.name = name;
        this.age = age;
        this.scores = scores;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        Persons cloned = (Persons) super.clone();
        // Manually deep copy the scores array
        cloned.scores = scores.clone();  // Deep copy of array
        return cloned;
    }

    public void display() {
        System.out.print("Name: " + name + ", Age: " + age + ", Scores: ");
        for (int score : scores) {
            System.out.print(score + " ");
        }
        System.out.println();
    }
}

public class DeepClone {
    public static void main(String[] args) {
        try {
            int[] scores = {100, 90, 80};
            Persons original = new Persons("John", 30, scores);
            original.display();

            // Deep clone
            Persons clone = (Persons) original.clone();
            clone.display();

            // Modify the cloned object's scores
            clone.scores[0] = 50;

            System.out.println("After modifying clone:");
            original.display();  // Original remains unaffected
            clone.display();     // Cloned object is modified

        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}
