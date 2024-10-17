public class LinearSearch {
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // return the index of the target element if found
            }
        }
        return -1; // return -1 if the target element is not found
    }

    public static void main(String[] args) {
        int[] arr = { 5, 3, 8, 1, 9, 2 };
        int target = 8;
        int result = linearSearch(arr, target);
        if (result != -1) {
            System.out.println("Element found at index: " + result);
        } else {
            System.out.println("Element not found in the array.");
        }
    }
}
