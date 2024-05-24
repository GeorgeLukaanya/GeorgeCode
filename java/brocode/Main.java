import javax.swing.JOptionPane;

public class Main {
    // This is a demonstration of GUI.
    public static void main(String[] args) {
        String name = JOptionPane.showInputDialog("Enter Your name: ");
        JOptionPane.showMessageDialog(null, "Hello " + name);

        int age = Integer.parseInt(JOptionPane.showInputDialog("enter your age"));
        JOptionPane.showMessageDialog(null, "You are " + age + " years old.");

    }
}
