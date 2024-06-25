# Note 📝 :

## Arrays Class in java.util package :

### Arrays.sort() :

In Java, the `Arrays.sort()` method is a utility method provided by the `java.util.Arrays` class, which is used to sort arrays. This method can sort arrays of primitives (such as `int`, `char`, `double`, etc.) and arrays of objects.

Here’s a breakdown of how `Arrays.sort()` works:

1. **Sorting Primitives**: For arrays of primitive types, `Arrays.sort()` uses a Dual-Pivot Quicksort algorithm, which is an efficient, general-purpose, comparison-based sorting algorithm.

   Example:
   ```java
   int[] numbers = {3, 5, 1, 4, 2};
   Arrays.sort(numbers); // Sorts the array in ascending order
   // numbers now contains [1, 2, 3, 4, 5]
   ```

2. **Sorting Objects**: For arrays of objects, `Arrays.sort()` uses a modified Timsort algorithm, which is a hybrid sorting algorithm derived from merge sort and insertion sort. The objects must implement the `Comparable` interface, or you need to provide a `Comparator`.

   Example with `Comparable`:
   ```java
   String[] names = {"Charlie", "Alice", "Bob"};
   Arrays.sort(names); // Sorts the array in ascending order
   // names now contains ["Alice", "Bob", "Charlie"]
   ```

   Example with `Comparator`:
   ```java
   String[] names = {"Charlie", "Alice", "Bob"};
   Arrays.sort(names, new Comparator<String>() {
       @Override
       public int compare(String s1, String s2) {
           return s2.compareTo(s1); // Sorts in descending order
       }
   });
   // names now contains ["Charlie", "Bob", "Alice"]
   ```

3. **Partial Sorting**: You can also sort only a portion of the array by specifying a range with the `fromIndex` (inclusive) and `toIndex` (exclusive) parameters.

   Example:
   ```java
   int[] numbers = {3, 5, 1, 4, 2};
   Arrays.sort(numbers, 1, 4); // Sorts the subarray from index 1 to 3
   // numbers now contains [3, 1, 4, 5, 2]
   ```

4. **Performance Considerations**: `Arrays.sort()` is highly optimized for performance. For small arrays, it uses insertion sort, and for larger arrays, it uses Timsort (for objects) or Dual-Pivot Quicksort (for primitives).

In summary, `Arrays.sort()` is a versatile and efficient method for sorting arrays in Java, with variations for different data types and sorting requirements.

### Arrays.equals() :

The `Arrays.equals()` method in Java is a utility method provided by the `java.util.Arrays` class, which is used to compare two arrays for equality. This method can be used with arrays of primitives and arrays of objects. Here’s how it works:

### Comparing Arrays of Primitives

When comparing arrays of primitive types (such as `int`, `char`, `double`, etc.), `Arrays.equals()` checks if the arrays are of the same length and if all corresponding pairs of elements in the two arrays are equal.

Example:
```java
int[] array1 = {1, 2, 3};
int[] array2 = {1, 2, 3};
int[] array3 = {1, 2, 4};

boolean result1 = Arrays.equals(array1, array2); // true
boolean result2 = Arrays.equals(array1, array3); // false
```

### Comparing Arrays of Objects

When comparing arrays of objects, `Arrays.equals()` checks if the arrays are of the same length and if all corresponding pairs of elements in the two arrays are equal according to the `equals()` method of the objects.

Example:
```java
String[] array1 = {"apple", "banana", "cherry"};
String[] array2 = {"apple", "banana", "cherry"};
String[] array3 = {"apple", "banana", "date"};

boolean result1 = Arrays.equals(array1, array2); // true
boolean result2 = Arrays.equals(array1, array3); // false
```

### Deep Equality

For comparing nested arrays (arrays containing other arrays), you should use `Arrays.deepEquals()`. This method performs a deep comparison of the arrays, meaning it compares the elements at all levels of nesting.

Example:
```java
int[][] array1 = {{1, 2, 3}, {4, 5, 6}};
int[][] array2 = {{1, 2, 3}, {4, 5, 6}};
int[][] array3 = {{1, 2, 3}, {4, 5, 7}};

boolean result1 = Arrays.deepEquals(array1, array2); // true
boolean result2 = Arrays.deepEquals(array1, array3); // false
```

#### Summary

- `Arrays.equals(array1, array2)` checks if two arrays are equal in length and content.
- It works for both arrays of primitives and arrays of objects.
- For nested arrays, use `Arrays.deepEquals(array1, array2)` to perform a deep comparison.

This method is useful for checking if two arrays contain the same data in the same order.


### Arrays.toString()

The `Arrays.toString()` method provides a string representation of the contents of an array. This method can be used with arrays of primitives and arrays of objects.

**Usage with Primitives:**
```java
int[] array = {1, 2, 3};
String arrayString = Arrays.toString(array); // arrayString is "[1, 2, 3]"
System.out.println(arrayString); // Output: [1, 2, 3]
```

**Usage with Objects:**
```java
String[] array = {"apple", "banana", "cherry"};
String arrayString = Arrays.toString(array); // arrayString is "[apple, banana, cherry]"
System.out.println(arrayString); // Output: [apple, banana, cherry]
```

### Arrays.binarySearch()

The `Arrays.binarySearch()` method searches the specified array for the specified value using the binary search algorithm. The array must be sorted prior to making this call. It returns the index of the search key if it is contained in the array; otherwise, it returns `-(insertion point) - 1`.

**Usage with Primitives:**
```java
int[] array = {1, 2, 3, 4, 5};
int index = Arrays.binarySearch(array, 3); // index is 2
int notFoundIndex = Arrays.binarySearch(array, 6); // notFoundIndex is -6
```

**Usage with Objects:**
```java
String[] array = {"apple", "banana", "cherry"};
int index = Arrays.binarySearch(array, "banana"); // index is 1
int notFoundIndex = Arrays.binarySearch(array, "date"); // notFoundIndex is -4
```

### Arrays.asList()

The `Arrays.asList()` method returns a fixed-size list backed by the specified array. Changes to the returned list "write through" to the array, and vice versa. This is useful for converting an array to a `List` so that you can use `List` methods on it.

**Example:**
```java
String[] array = {"apple", "banana", "cherry"};
List<String> list = Arrays.asList(array); // list is ["apple", "banana", "cherry"]

list.set(0, "avocado"); // Modifies both the list and the array
System.out.println(array[0]); // Output: avocado

// Note: Adding or removing elements from the list will throw UnsupportedOperationException
try {
    list.add("date"); // Throws UnsupportedOperationException
} catch (UnsupportedOperationException e) {
    System.out.println("Cannot add elements to the list"); // Output: Cannot add elements to the list
}
```

**Usage Notes:**
- The returned list is fixed-size, meaning you cannot add or remove elements from it. However, you can modify existing elements.
- For a modifiable list, consider using `new ArrayList<>(Arrays.asList(array))`.

### Arrays.fill() : 

The `Arrays.fill()` method in Java is used to fill an entire array or a specified range within an array with a specified value. This method is part of the `java.util.Arrays` class and is useful when you want to initialize an array with a default value or when you need to reset the contents of an array to a specific value.

### Syntax

There are two overloaded versions of the `fill()` method:

1. **Fill Entire Array:**
   ```java
   public static void fill(int[] array, int value)
   ```
   - Fills the entire `array` with the specified `value`.

   **Example:**
   ```java
   int[] numbers = new int[5];
   Arrays.fill(numbers, 42); // numbers now contains [42, 42, 42, 42, 42]
   ```

2. **Fill Specific Range:**
   ```java
   public static void fill(int[] array, int fromIndex, int toIndex, int value)
   ```
   - Fills the specified range `[fromIndex, toIndex)` in the `array` with the specified `value`.

   **Example:**
   ```java
   int[] numbers = {1, 2, 3, 4, 5};
   Arrays.fill(numbers, 1, 4, 99); // numbers now contains [1, 99, 99, 99, 5]
   ```

### Key Points

- **Modification of Existing Values:** The `fill()` method replaces the current values in the array with the specified value, overwriting any existing elements.
  
- **Primitive and Object Arrays:** `Arrays.fill()` can be used with arrays of all primitive types (`int`, `double`, `char`, etc.) as well as arrays of objects.

- **Efficiency:** This method is efficient and operates in linear time relative to the size of the array. It's suitable for quickly initializing or resetting array contents.

### Use Cases

- **Initialization:** Initialize an array with default values.
  
- **Resetting Values:** Reset the contents of an array to a specific value after processing.

- **Preparation for Testing:** Set up arrays with predictable values for unit testing or simulations.

By using `Arrays.fill()`, you can quickly and efficiently populate or reset the contents of arrays in Java, making it a versatile tool for array manipulation tasks.

` These methods enhance your ability to manipulate arrays in Java, making it easier to convert, search, and represent arrays in different forms.`
