
public class Main {
    class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if (n < 2) return n;

        int L = 0, R = 1;

        while (R < n) {
            if (nums[R] != nums[L]) {
                L++;
                nums[L] = nums[R];
            }
            R++;
        }

        return L + 1;
       }
    }
    public static void main(String[] args) {
        // Example sorted array with duplicates
        int[] nums = {1, 1, 2, 2, 3, 4, 4, 5};

        // Create an instance of the Solution class
        Solution solution = new Solution();

        // Call the removeDuplicates method and get the new length
        int newLength = solution.removeDuplicates(nums);

        // Print the results
        System.out.println("New length after removing duplicates: " + newLength);
        System.out.print("Array after removing duplicates: ");
        
        // Only print the first newLength elements of the array
        for (int i = 0; i < newLength; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
