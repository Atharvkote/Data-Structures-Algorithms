# Character Class in Java

The `Character` class is a wrapper class in Java that encapsulates a primitive `char` value within an object. It provides utility methods for manipulating characters, converting between types, and performing operations related to character values. This README provides an overview of the key methods and functionalities of the `Character` class.

## Overview

The `Character` class is part of the `java.lang` package and provides a way to use `char` values as objects. This class is immutable, meaning once a `Character` object is created, its value cannot be changed.

## Key Methods

Here are some of the most important methods of the `Character` class:

### 1. `isLetter(char ch)`

- **Description**: Determines if the specified character is a letter. This method returns `true` for alphabetic characters (A-Z, a-z).
- **Example**: `boolean isLetter = Character.isLetter('A');` // returns `true`

### 2. `isDigit(char ch)`

- **Description**: Determines if the specified character is a digit (0-9).
- **Example**: `boolean isDigit = Character.isDigit('5');` // returns `true`

### 3. `isWhitespace(char ch)`

- **Description**: Determines if the specified character is a whitespace character (space, tab, newline, etc.).
- **Example**: `boolean isWhitespace = Character.isWhitespace(' ');` // returns `true`

### 4. `isUpperCase(char ch)`

- **Description**: Determines if the specified character is an uppercase letter (A-Z).
- **Example**: `boolean isUpperCase = Character.isUpperCase('Z');` // returns `true`

### 5. `isLowerCase(char ch)`

- **Description**: Determines if the specified character is a lowercase letter (a-z).
- **Example**: `boolean isLowerCase = Character.isLowerCase('a');` // returns `true`

### 6. `toUpperCase(char ch)`

- **Description**: Converts the specified character to its uppercase equivalent. If the character is already uppercase or not a letter, it remains unchanged.
- **Example**: `char upper = Character.toUpperCase('b');` // returns 'B'

### 7. `toLowerCase(char ch)`

- **Description**: Converts the specified character to its lowercase equivalent. If the character is already lowercase or not a letter, it remains unchanged.
- **Example**: `char lower = Character.toLowerCase('A');` // returns 'a'

### 8. `charValue()`

- **Description**: Returns the primitive `char` value of the `Character` object.
- **Example**: `char ch = new Character('X').charValue();` // returns 'X'

### 9. `isDefined(char ch)`

- **Description**: Determines if the specified character is defined in Unicode. This method returns `true` if the character is a valid Unicode character.
- **Example**: `boolean isDefined = Character.isDefined('A');` // returns `true`

### 10. `toString(char ch)`

- **Description**: Converts the specified `char` value to a `String`. This is a static method that returns a `String` representation of the character.
- **Example**: `String str = Character.toString('C');` // returns "C"

## Usage

The `Character` class is useful when you need to work with `char` values in an object-oriented context or when performing operations on characters. It provides utility methods for character classification, conversion, and manipulation.

## Example

Here is an example that demonstrates how to use some of the key methods of the `Character` class:

```java
public class CharacterExample {
    public static void main(String[] args) {
        // Check if a character is a letter
        boolean isLetter = Character.isLetter('A');
        System.out.println("Is 'A' a letter? " + isLetter);

        // Convert character to uppercase
        char upper = Character.toUpperCase('b');
        System.out.println("Uppercase of 'b': " + upper);

        // Check if a character is a digit
        boolean isDigit = Character.isDigit('5');
        System.out.println("Is '5' a digit? " + isDigit);

        // Convert character to lowercase
        char lower = Character.toLowerCase('A');
        System.out.println("Lowercase of 'A': " + lower);

        // Check if a character is whitespace
        boolean isWhitespace = Character.isWhitespace(' ');
        System.out.println("Is space a whitespace? " + isWhitespace);

        // Get char value from Character object
        char ch = new Character('X').charValue();
        System.out.println("Character value: " + ch);
        
        // Convert character to string
        String str = Character.toString('C');
        System.out.println("String representation of 'C': " + str);
    }
}
```

## Conclusion

The `Character` class provides essential methods for working with character values in Java, offering functionality for character classification, conversion, and manipulation. Understanding these methods can help you handle characters more effectively in your Java applications.

