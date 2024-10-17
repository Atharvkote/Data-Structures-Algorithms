import java.util.Scanner;
import java.util.Stack;

public class DecimalToBinaryUsingStack {
    
    // Method to convert decimal to binary using a stack
    public static String convertToBinary(int decimal) {
        if (decimal == 0) {
            return "0";
        }

        Stack<Integer> stack = new Stack<>();
        
        // Loop until the decimal number is greater than 0
        while (decimal > 0) {
            // Get the remainder when divided by 2 (either 0 or 1)
            int remainder = decimal % 2;
            // Push the remainder onto the stack
            stack.push(remainder);
            // Divide the number by 2
            decimal = decimal / 2;
        }
        
        // Construct the binary string from the stack
        StringBuilder binary = new StringBuilder();
        while (!stack.isEmpty()) {
            binary.append(stack.pop());
        }
        
        return binary.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a decimal number: ");
        int decimal = scanner.nextInt();
        
        String binary = convertToBinary(decimal);
        System.out.println("Binary representation: " + binary);
        
        scanner.close();
    }
}
