# Sliding Window Technique

## Introduction

The sliding window technique is a powerful approach for solving problems that involve processing elements in a subset or subarray of a larger collection. It is particularly useful for problems that require examining all contiguous subarrays of a fixed length, or finding an optimal subarray based on certain conditions.

## How It Works

The sliding window technique maintains a window that slides over the collection (such as an array or string) to reduce the amount of repeated work done during each step. By updating the window incrementally, the technique avoids the need to reprocess the entire subarray from scratch.

### Steps Involved

1. **Initialize the Window**: Set the initial window's start and end indices.
2. **Expand the Window**: Incrementally add elements to the window until it meets the desired condition.
3. **Shrink the Window**: Adjust the start of the window to maintain the desired condition or to explore new subarrays.
4. **Record Results**: Depending on the problem, record the necessary results when the window is in a valid state.

### Visualization

Let's visualize the sliding window technique using the example of finding the maximum sum of any subarray of size `k`.

#### Example Problem

Given an array `arr = [2, 1, 5, 1, 3, 2]` and `k = 3`, find the maximum sum of any subarray of size 3.

#### Step-by-Step Visualization

1. **Initial Window**:
    - Array: `[2, 1, 5, 1, 3, 2]`
    - Window: `[2, 1, 5]`
    - Window Sum: `2 + 1 + 5 = 8`

    ```
    [2, 1, 5, 1, 3, 2]
     ^-----^
    ```

2. **Slide the Window to the Right**:
    - Remove the leftmost element (2) and add the next element (1).
    - New Window: `[1, 5, 1]`
    - Window Sum: `1 + 5 + 1 = 7`

    ```
    [2, 1, 5, 1, 3, 2]
        ^-----^
    ```

3. **Slide the Window to the Right Again**:
    - Remove the leftmost element (1) and add the next element (3).
    - New Window: `[5, 1, 3]`
    - Window Sum: `5 + 1 + 3 = 9`

    ```
    [2, 1, 5, 1, 3, 2]
           ^-----^
    ```

4. **Slide the Window to the Right One More Time**:
    - Remove the leftmost element (5) and add the next element (2).
    - New Window: `[1, 3, 2]`
    - Window Sum: `1 + 3 + 2 = 6`

    ```
    [2, 1, 5, 1, 3, 2]
              ^-----^
    ```

5. **Conclusion**:
    - The maximum sum of any subarray of size 3 is `9`.

## Example Implementation

Here's an example implementation of finding the maximum sum of any subarray of size `k` using the sliding window technique in Python:

```java
public class SlidingWindow {

    public static int maxSumSubarray(int[] arr, int k) {
        int n = arr.length;
        if (n < k) {
            return -1; // Not enough elements to form a subarray of size k
        }
        
        int windowSum = 0;
        // Compute the sum of the first window
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        
        int maxSum = windowSum;
        // Slide the window over the rest of the array
        for (int i = 0; i < n - k; i++) {
            windowSum = windowSum - arr[i] + arr[i + k];
            maxSum = Math.max(maxSum, windowSum);
        }
        
        return maxSum;
    }

    public static void main(String[] args) {
        int[] arr = {2, 1, 5, 1, 3, 2};
        int k = 3;
        System.out.println("Maximum sum of subarray of size " + k + ": " + maxSumSubarray(arr, k));
    }
}
```

## When to Use Sliding Window

The sliding window technique is particularly effective when:

- The problem involves contiguous subarrays or substrings.
- You need to optimize the performance and avoid redundant computations.
- The size of the window is fixed or can be adjusted incrementally.

## Conclusion

The sliding window technique is a versatile and efficient method for solving a wide range of problems involving contiguous elements in an array or string. By understanding and applying this technique, you can improve the performance and clarity of your solutions for such problems.
