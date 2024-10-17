//Question : Print the Subarray With Maximum Sum

    //Kadane's Algorithm
    public static void maxSubarraySum3(int arr[]) {
        int cs = 0;
        int ms = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++) {
            cs = cs + arr[i];
            ms = Math.max(ms, cs);
            if(cs < 0) {
                cs = 0;
            } 
        }

        System.out.println("max subarray sum is : " + ms);
    }
    public static void main(String args[]) {
        int arr[] = {1, -2, 6, -1, 3};
        maxSubarraySum1(arr); 
        maxSubarraySum2(arr);
        maxSubarraySum3(arr);
    }
}
