import java.util.PriorityQueue;

public class HeapSort {
    // Method to perform heap sort using PriorityQueue
    public static void heapSort(int[] arr) {
        // Create a PriorityQueue (Min-Heap)
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        // Insert all elements into the PriorityQueue
        for (int num : arr) {
            minHeap.offer(num);
        }

        // Extract elements from the PriorityQueue and place them back into the array
        int index = 0;
        while (!minHeap.isEmpty()) {
            arr[index++] = minHeap.poll(); // poll() retrieves and removes the head of the queue
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 3, 8, 4, 1, 9, 2};

        System.out.println("Original array:");
        printArray(arr);

        // Perform Heap Sort
        heapSort(arr);

        System.out.println("Sorted array using Heap Sort:");
        printArray(arr);
    }

    // Utility method to print an array
    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
