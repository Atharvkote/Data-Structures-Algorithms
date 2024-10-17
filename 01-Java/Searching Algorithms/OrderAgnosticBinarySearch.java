class BinarySearch{
  static int orderAgnosticBS(int[] arr, int target) {
    int leftIndex = 0;
    int rightIndex = arr.length - 1;

    // Determine if the array is sorted in ascending or descending order
    boolean isAscendingOrder = arr[leftIndex] < arr[rightIndex];

    while (leftIndex <= rightIndex) {
        // Find the middle element
        int middleIndex = leftIndex + (rightIndex - leftIndex) / 2;

        if (arr[middleIndex] == target) {
            return middleIndex;
        }

        if (isAscendingOrder) {
            if (target < arr[middleIndex]) {
                rightIndex = middleIndex - 1;
            } else {
                leftIndex = middleIndex + 1;
            }
        } else {
            if (target > arr[middleIndex]) {
                rightIndex = middleIndex - 1;
            } else {
                leftIndex = middleIndex + 1;
            }
        }
    }
    return -1;
   }
}
