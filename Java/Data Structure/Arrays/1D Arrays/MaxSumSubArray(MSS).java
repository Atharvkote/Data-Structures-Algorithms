//Question : Print maximum subarray sum
public class MaxSubarraySum {
    //Bruteforce
    public static void maxSubarraySum1(int arr[]) {
        int largestSum = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++) {
            for(int j=i+1; j<arr.length; j++) {
                int currSum = 0;
                for(int k=i; k<=j; k++) {
                    currSum += arr[k];
                }
                largestSum = Math.max(largestSum, currSum);
            }
        }
        
        System.out.println("max subarray sum is : " + largestSum);
    }
    public static void main(String args[]) {
        int arr[] = {1, -2, 6, -1, 3};
        maxSubarraySum1(arr); 
    }
}
