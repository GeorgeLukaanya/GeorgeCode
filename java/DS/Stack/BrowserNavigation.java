import java.util.Stack;

public class BrowserNavigation {
    private Stack<String> backStack = new Stack<>();
    private Stack<String> forwardStack = new Stack<>();
    private String currentPage;

    public BrowserNavigation(String initialPage) {
        currentPage = initialPage;  // Initialize with a homepage, e.g., "Home"
    }

    // Method to visit a new page
    public void visit(String page) {
        if (currentPage != null) {
            backStack.push(currentPage);  // Push the current page onto the back stack
        }
        currentPage = page;  // Set the new page as the current page
        forwardStack.clear();  // Clear the forward stack
        System.out.println("Visited: " + currentPage);
    }

    // Method to go back to the previous page
    public void back() {
        if (!backStack.isEmpty()) {
            forwardStack.push(currentPage);  // Push the current page onto the forward stack
            currentPage = backStack.pop();  // Pop from the back stack and make it the current page
            System.out.println("Back to: " + currentPage);
        } else {
            System.out.println("No previous page to go back to.");
        }
    }

    // Method to go forward to the next page
    public void forward() {
        if (!forwardStack.isEmpty()) {
            backStack.push(currentPage);  // Push the current page onto the back stack
            currentPage = forwardStack.pop();  // Pop from the forward stack and make it the current page
            System.out.println("Forward to: " + currentPage);
        } else {
            System.out.println("No forward page to navigate to.");
        }
    }

    // Method to display the current page
    public void displayCurrentPage() {
        System.out.println("Current page: " + currentPage);
    }

    // Method to display the back stack
    public void displayBackStack() {
        System.out.println("Back stack: " + backStack);
    }

    // Method to display the forward stack
    public void displayForwardStack() {
        System.out.println("Forward stack: " + forwardStack);
    }

    public static void main(String[] args) {
        BrowserNavigation browser = new BrowserNavigation("Home");

        // Test the browser navigation system
        browser.visit("Page1");
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();

        browser.visit("Page2");
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();

        browser.back();
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();

        browser.forward();
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();

        browser.visit("Page3");
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();

        browser.back();
        browser.displayCurrentPage();
        browser.displayBackStack();
        browser.displayForwardStack();
    }
}
