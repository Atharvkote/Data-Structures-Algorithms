import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BucketSort {
    public static void bucketSort(float[] arr, int n) {
        if (n <= 0)
            return;

        // Create n empty buckets
        @SuppressWarnings("unchecked")
        List<Float>[] buckets = new ArrayList[n];

        for (int i = 0; i < n; i++) {
            buckets[i] = new ArrayList<>();
        }

        // Put array elements in different buckets
        for (int i = 0; i < n; i++) {
            int bucketIndex = (int) arr[i] * n; // index in bucket
            buckets[bucketIndex].add(arr[i]);
        }

        // Sort individual buckets
        for (int i = 0; i < n; i++) {
            Collections.sort(buckets[i]);
        }

        // Concatenate all buckets into arr[]
        int index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < buckets[i].size(); j++) {
                arr[index++] = buckets[i].get(j);
            }
        }
    }

    // Main function to test the algorithm
    public static void main(String[] args) {
        float[] arr = {0.42f, 0.32f, 0.53f, 0.25f, 0.47f, 0.51f};
        int n = arr.length;
        bucketSort(arr, n);

        System.out.println("Sorted array: ");
        for (float el : arr) {
            System.out.print(el + " ");
        }
    }
}
