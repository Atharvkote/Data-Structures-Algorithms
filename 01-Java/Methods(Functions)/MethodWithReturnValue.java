public class MethodWithReturnValue {
    // Method that adds two numbers and returns the result
    public static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        // Calling the method and storing the result
        int result = add(5, 3);
        System.out.println("The sum is: " + result);
    }
}
