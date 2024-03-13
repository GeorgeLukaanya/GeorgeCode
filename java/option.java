import javax.swing.JOptionPane;
    public class option{
    public static void main(String[] args)
    {
    String appleString =
    JOptionPane.showInputDialog("Enter the first number:");
    int appleCount = Integer.parseInt(appleString);
    String orangeString =
    JOptionPane.showInputDialog("Enter number of oranges:");
    int orangeCount = Integer.parseInt(orangeString);
    int totalFruitCount = appleCount + orangeCount;
    JOptionPane.showMessageDialog(null,
    "The total number of fruits = " + totalFruitCount);
    System.exit(0);
    }
    }
