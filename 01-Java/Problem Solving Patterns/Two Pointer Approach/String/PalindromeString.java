class Solution {
    public boolean isPalindrome(String s) {
        // Initialize two pointers, one at the start and one at the end of the string
        int left = 0;
        int right = s.length() - 1;

        // Traverse the string from both ends towards the middle
        while (left < right) {
            // Skip non-alphanumeric characters from the left side
            while (left < right && !Character.isLetterOrDigit(s.charAt(left))) {
                left++;
            }
            // Skip non-alphanumeric characters from the right side
            while (left < right && !Character.isLetterOrDigit(s.charAt(right))) {
                right--;
            }
            // Compare the characters at the current pointers
            if (Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))) {
                return false; // If they don't match, it's not a palindrome
            }
            // Move the pointers closer to the center
            left++;
            right--;
        }

        // If all characters match, the string is a palindrome
        return true;
    }
}
