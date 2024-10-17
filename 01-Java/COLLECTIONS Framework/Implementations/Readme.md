# Note 📝 :

### Collection.sort() 
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
Sure! Here's a detailed breakdown of some common methods in the `Collections` class from the `java.util` package:




### Collections.reverse()

The `Collections.reverse()` method reverses the order of elements in a list.

**Example:**
```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
Collections.reverse(numbers); // Reverses the list
// numbers now contains [5, 4, 3, 2, 1]
```

### Collections.shuffle()

The `Collections.shuffle()` method randomly shuffles the elements in a list, using a default source of randomness or a specified random generator.

**Example with Default Randomness:**
```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
Collections.shuffle(numbers); // Randomly shuffles the list
```

**Example with Specified Random Generator:**
```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
Collections.shuffle(numbers, new Random()); // Randomly shuffles the list using a specified random generator
```

### Collections.min() and Collections.max()

The `Collections.min()` and `Collections.max()` methods return the minimum and maximum element in a collection, respectively. The elements must implement the `Comparable` interface, or a `Comparator` must be provided.

**Usage with Comparable:**
```java
List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
int min = Collections.min(numbers); // min is 1
int max = Collections.max(numbers); // max is 5
```

**Usage with Comparator:**
```java
List<String> names = Arrays.asList("Charlie", "Alice", "Bob");
String min = Collections.min(names, new Comparator<String>() {
    @Override
    public int compare(String s1, String s2) {
        return s2.compareTo(s1); // Determines minimum in reverse order
    }
}); // min is "Charlie"
```

### Collections.swap()

The `Collections.swap()` method swaps the elements at two specified positions in a list.

**Example:**
```java
List<String> names = Arrays.asList("Charlie", "Alice", "Bob");
Collections.swap(names, 0, 2); // Swaps elements at index 0 and 2
// names now contains ["Bob", "Alice", "Charlie"]
```

### Collections.fill()

The `Collections.fill()` method replaces all elements in a list with the specified element.

**Example:**
```java
List<String> names = new ArrayList<>(Arrays.asList("Charlie", "Alice", "Bob"));
Collections.fill(names, "Unknown"); // Fills the list with "Unknown"
// names now contains ["Unknown", "Unknown", "Unknown"]
```

### Collections.copy()

The `Collections.copy()` method copies elements from one list into another. The destination list must be at least as long as the source list.

**Example:**
```java
List<String> source = Arrays.asList("Charlie", "Alice", "Bob");
List<String> destination = Arrays.asList("1", "2", "3");
Collections.copy(destination, source); // Copies elements from source to destination
// destination now contains ["Charlie", "Alice", "Bob"]
```

### Collections.unmodifiableList()

The `Collections.unmodifiableList()` method returns an unmodifiable view of the specified list. Attempts to modify the returned list will result in an `UnsupportedOperationException`.

**Example:**
```java
List<String> names = new ArrayList<>(Arrays.asList("Charlie", "Alice", "Bob"));
List<String> unmodifiableNames = Collections.unmodifiableList(names);

try {
    unmodifiableNames.add("David"); // Throws UnsupportedOperationException
} catch (UnsupportedOperationException e) {
    System.out.println("Cannot modify unmodifiable list"); // Output: Cannot modify unmodifiable list
}
```

### Collections.frequency()

The `Collections.frequency()` method returns the number of occurrences of the specified element in the specified collection.

**Example:**
```java
List<String> names = Arrays.asList("Charlie", "Alice", "Bob", "Alice");
int frequency = Collections.frequency(names, "Alice"); // frequency is 2
```

### Collections.disjoint()

The `Collections.disjoint()` method returns `true` if the two specified collections have no elements in common.

**Example:**
```java
List<String> list1 = Arrays.asList("Charlie", "Alice");
List<String> list2 = Arrays.asList("Bob", "David");
boolean disjoint = Collections.disjoint(list1, list2); // disjoint is true
```

### Collections.addAll()

The `Collections.addAll()` method adds all of the specified elements to the specified collection.

**Example:**
```java
List<String> names = new ArrayList<>();
Collections.addAll(names, "Charlie", "Alice", "Bob"); // Adds elements to the list
// names now contains ["Charlie", "Alice", "Bob"]
```

### Collections.nCopies()

The `Collections.nCopies()` method returns an immutable list consisting of `n` copies of the specified object.

**Example:**
```java
List<String> names = Collections.nCopies(3, "Alice"); // Creates a list with 3 copies of "Alice"
// names contains ["Alice", "Alice", "Alice"]
```

### Collections.synchronizedList()

The `Collections.synchronizedList()` method returns a synchronized (thread-safe) list backed by the specified list.

**Example:**
```java
List<String> names = new ArrayList<>(Arrays.asList("Charlie", "Alice", "Bob"));
List<String> synchronizedNames = Collections.synchronizedList(names);

// Use synchronizedNames for thread-safe operations
```

These methods from the `Collections` class enhance your ability to manipulate and interact with collections in Java, providing a variety of utilities for sorting, searching, modifying, and more.
