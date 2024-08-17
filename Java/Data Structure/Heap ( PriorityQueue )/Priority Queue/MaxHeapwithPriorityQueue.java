import java.util.PriorityQueue;
import java.util.Comparator;

public class MaxHeapExample {
    public static void main(String[] args) {
        // Create a PriorityQueue to function as a max heap using a custom comparator
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Comparator.reverseOrder());

        // Add elements to the max heap
        maxHeap.add(10);
        maxHeap.add(20);
        maxHeap.add(5);
        maxHeap.add(1);

        // Print and remove elements in descending order
        System.out.println("Max heap elements in descending order:");
        while (!maxHeap.isEmpty()) {
            System.out.println(maxHeap.poll());
        }
    }
}
