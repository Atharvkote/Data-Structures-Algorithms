import java.util.Stack;

public class ParenthesisChecker {
    
    // Method to check if the parentheses are balanced
    public static boolean areParenthesesBalanced(String expression) {
        // Using a stack to keep track of opening brackets
        Stack<Character> stack = new Stack<>();
        
        // Traversing the expression
        for (int i = 0; i < expression.length(); i++) {
            char character = expression.charAt(i);

            // If the character is an opening bracket, push it onto the stack
            if (character == '(' || character == '{' || character == '[') {
                stack.push(character);
            }
            // If the character is a closing bracket
            else if (character == ')' || character == '}' || character == ']') {
                // If stack is empty, return false
                if (stack.isEmpty()) {
                    return false;
                }

                // Pop the top element from the stack
                char top = stack.pop();

                // Check if the popped character matches the current closing bracket
                if ((character == ')' && top != '(') ||
                    (character == '}' && top != '{') ||
                    (character == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If stack is empty, all opening brackets had matching closing brackets
        return stack.isEmpty();
    }

    public static void main(String[] args) {
        String expression = "{[()]}"; // Example expression to check
        
        if (areParenthesesBalanced(expression)) {
            System.out.println("The parentheses are balanced.");
        } else {
            System.out.println("The parentheses are not balanced.");
        }
    }
}
