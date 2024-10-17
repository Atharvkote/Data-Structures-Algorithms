# Conditional Statements in Java

This README provides an overview of conditional statements in Java, including if-else, switch-case, and ternary operator.

## 1. If-Else Statement

The if-else statement executes a block of code if a specified condition is true. If the condition is false, another block of code can be executed.

### Syntax

```java
if (condition) {
    // Block of code to execute if the condition is true
} else {
    // Block of code to execute if the condition is false
}
```

### Example

```java
int num = 10;
if (num > 0) {
    System.out.println("Number is positive");
} else {
    System.out.println("Number is non-positive");
}
```

## 2. Switch-Case Statement

The switch-case statement evaluates an expression and executes the block of code associated with the matching case label.

### Syntax

```java
switch (expression) {
    case value1:
        // Block of code to execute if expression equals value1
        break;
    case value2:
        // Block of code to execute if expression equals value2
        break;
    // Add more cases as needed
    default:
        // Block of code to execute if expression doesn't match any case
}
```

### Example

```java
int day = 3;
String dayName;
switch (day) {
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    // Add more cases for other days
    default:
        dayName = "Invalid day";
}
System.out.println("Day is: " + dayName);
```

## 3. Ternary Operator

The ternary operator provides a concise way to write conditional expressions.

### Syntax

```java
variable = (condition) ? expression1 : expression2;
```

### Example

```java
int num = 10;
String result = (num % 2 == 0) ? "Even" : "Odd";
System.out.println("Number is " + result);
```

