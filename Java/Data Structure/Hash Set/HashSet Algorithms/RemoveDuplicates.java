import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class RemoveDuplicates {
    public static void main(String[] args) {
        // Example array with duplicates
        Integer[] numbers = {1, 2, 3, 4, 3, 2, 5, 6, 4, 7};

        // Convert array to a HashSet to remove duplicates
        Set<Integer> uniqueNumbers = new HashSet<>(Arrays.asList(numbers));
        // Or You can Populate the HashSet using a for loop to remove duplicates
        for (Integer number : numbers) {
            uniqueNumbers.add(number);
         }

        // Convert back to an array if needed
        Integer[] uniqueArray = uniqueNumbers.toArray(new Integer[0]);

        // Print the unique array
        System.out.println("Array with duplicates removed: " + Arrays.toString(uniqueArray));
    }
}
