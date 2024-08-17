import java.util.PriorityQueue;

public class MinHeapExample {
    public static void main(String[] args) {
        // Create a PriorityQueue to function as a min heap
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        // Add elements to the min heap
        minHeap.add(10);
        minHeap.add(20);
        minHeap.add(5);
        minHeap.add(1);

        // Print and remove elements in ascending order
        System.out.println("Min heap elements in ascending order:");
        while (!minHeap.isEmpty()) {
            System.out.println(minHeap.poll());
        }
    }
}
