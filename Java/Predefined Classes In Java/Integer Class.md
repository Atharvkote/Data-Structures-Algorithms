# Integer Class in Java

The `Integer` class is a wrapper class in Java that encapsulates a primitive `int` value within an object. It provides utility methods for converting between types, comparing values, and performing operations on integers. This README provides an overview of the key methods and functionalities of the `Integer` class.

## Overview

The `Integer` class is part of the `java.lang` package and provides a way to use `int` values as objects. This class is immutable, meaning once an `Integer` object is created, its value cannot be changed.

## Key Methods

Here are some of the most important methods of the `Integer` class:

### 1. `parseInt(String s)`

- **Description**: Converts a `String` into a primitive `int`. Throws a `NumberFormatException` if the string does not contain a parsable integer.
- **Example**: `int number = Integer.parseInt("123");`

### 2. `valueOf(String s)`

- **Description**: Converts a `String` into an `Integer` object. It is similar to `parseInt`, but returns an `Integer` object.
- **Example**: `Integer number = Integer.valueOf("123");`

### 3. `toString(int i)`

- **Description**: Converts a primitive `int` into its `String` representation.
- **Example**: `String str = Integer.toString(123);`

### 4. `compareTo(Integer anotherInteger)`

- **Description**: Compares this `Integer` object with another `Integer` object. Returns a negative integer, zero, or a positive integer depending on the comparison.
- **Example**: `int result = Integer.valueOf(123).compareTo(100);`

### 5. `compare(int x, int y)`

- **Description**: Compares two primitive `int` values. Returns a negative integer, zero, or a positive integer depending on the comparison.
- **Example**: `int result = Integer.compare(123, 100);`

### 6. `equals(Object obj)`

- **Description**: Checks if this `Integer` object is equal to another object. Returns `true` if the other object is an `Integer` with the same `int` value.
- **Example**: `boolean isEqual = Integer.valueOf(123).equals(123);`

### 7. `intValue()`

- **Description**: Returns the value of this `Integer` object as a primitive `int`.
- **Example**: `int number = Integer.valueOf(123).intValue();`

### 8. `toBinaryString(int i)`

- **Description**: Returns a string representation of the specified `int` value in base 2 (binary).
- **Example**: `String binary = Integer.toBinaryString(5);` // returns "101"

### 9. `bitCount(int i)`

- **Description**: Returns the number of one-bits (set bits) in the two's complement binary representation of the specified `int` value.
- **Example**: `int count = Integer.bitCount(5);` // returns 2

### 10. `reverse(int i)`

- **Description**: Returns the value obtained by reversing the order of the bits in the two's complement binary representation of the specified `int` value.
- **Example**: `int reversed = Integer.reverse(5);`

## Usage

The `Integer` class is useful when you need to work with `int` values in an object-oriented context or when working with collections that require objects. It also provides convenient methods for converting between primitive `int` values and their string representations.

## Example

Here is an example that demonstrates how to use some of the key methods of the `Integer` class:

```java
public class IntegerExample {
    public static void main(String[] args) {
        // Convert string to int
        int number = Integer.parseInt("12345");

        // Convert int to Integer object
        Integer integerObject = Integer.valueOf(number);

        // Compare two Integer objects
        Integer anotherInteger = 67890;
        if (integerObject.compareTo(anotherInteger) < 0) {
            System.out.println("integerObject is less than anotherInteger");
        }

        // Get int value from Integer object
        int primitiveValue = integerObject.intValue();

        // Convert int to binary string
        String binaryString = Integer.toBinaryString(primitiveValue);
        System.out.println("Binary representation: " + binaryString);

        // Count the number of 1-bits
        int bitCount = Integer.bitCount(primitiveValue);
        System.out.println("Number of 1-bits: " + bitCount);

        // Reverse the bits
        int reversedBits = Integer.reverse(primitiveValue);
        System.out.println("Reversed bit value: " + reversedBits);
    }
}
```

## Conclusion

The `Integer` class provides essential methods for working with integer values in Java, offering functionality beyond basic arithmetic operations. Understanding these methods can help you manipulate and utilize integers more effectively in your Java applications.

