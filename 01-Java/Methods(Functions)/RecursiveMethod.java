public class RecursiveMethod {
    // Method to calculate factorial of a number
    public static int factorial(int n) {
        if (n <= 1) {
            return 1; // Base case
        } else {
            return n * factorial(n - 1); // Recursive case
        }
    }

    public static void main(String[] args) {
        // Calling the recursive method
        int result = factorial(5);
        System.out.println("Factorial of 5 is: " + result);
    }
}
