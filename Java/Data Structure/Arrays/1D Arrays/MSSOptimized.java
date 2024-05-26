//Question : Print maximum subarray sum


    //optimization1 : Prefix Sum array
    public static void maxSubarraySum2(int arr[]) {
        int maxSum = Integer.MIN_VALUE;

        int prefix[] = new int[arr.length];
        prefix[0] = arr[0];
        for(int i=1; i<arr.length; i++) {
            prefix[i] = prefix[i-1] + arr[i];
        }

        for(int i=0; i<arr.length; i++) {
            for(int j=i+1; j<arr.length; j++) {
                int currSum = i==0 ? prefix[j] : prefix[j] - prefix[i-1];
                maxSum = Math.max(maxSum, currSum);
            }
        }
        
        System.out.println("max subarray sum is : " + maxSum);
    }
    public static void main(String args[]) {
        int arr[] = {1, -2, 6, -1, 3};
        
        maxSubarraySum2(arr);

    }
}
