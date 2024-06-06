# Note 📝 :

### Sorting a Collection
For sorting a Data Structures made using Collections Framework the is a In Built Method :
`Collections.sort()` 

Simple Java program that demonstrates how to create an `ArrayList` of integers, populate it with numbers, and then sort it using `Collections.sort()`:

### Code Example

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Create an ArrayList and add some numbers to it
        List<Integer> numbers = new ArrayList<>();
        numbers.add(5);
        numbers.add(3);
        numbers.add(8);
        numbers.add(1);
        numbers.add(6);

        // Print the list before sorting
        System.out.println("Before sorting: " + numbers);

        // Sort the list
        Collections.sort(numbers);

        // Print the list after sorting
        System.out.println("After sorting: " + numbers);
    }
}
```
### Output
```java
Before sorting: [5, 3, 8, 1, 6]
After sorting: [1, 3, 5, 6, 8]
```
