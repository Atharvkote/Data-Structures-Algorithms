public class Main {
  class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        if (n < 2) return;

        int L = 0, R = 0;

        // Iterate through the array
        while (R < n) {
            if (nums[L] != 0) {
                // If nums[L] is not zero, move both pointers forward
                L++;
                R++;
            } else if (nums[R] == 0) {
                // If nums[R] is zero, just move R forward
                R++;
            } else {
                // Swap nums[L] and nums[R]
                int temp = nums[R];
                nums[R] = nums[L];
                nums[L] = temp;

                // Move both pointers forward
                L++;
                R++;
            }
        }
    }
  }
    public static void main(String[] args) {
        int[] nums = {0, 1, 0, 3, 12};
        
        // Create an instance of the Solution class
        Solution solution = new Solution();
        
        // Call the moveZeroes method
        solution.moveZeroes(nums);
        
        // Print the modified array
        System.out.print("Array after moving zeroes: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }
}
