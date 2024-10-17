# Switch-Case Statement in Java

This README provides an overview of the switch-case statement in Java.

## 1. Switch-Case Statement

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

- The `expression` can be of type `byte`, `short`, `int`, `char`, `String`, or an enumeration.
- Each `case` label specifies a value to compare the expression against.
- The `break` statement terminates the switch statement.
- The `default` case is optional and executes if none of the other cases match.

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

- In this example, the variable `day` is evaluated, and the corresponding block of code is executed based on its value.
- If `day` is `1`, the output will be "Day is: Monday".
- If `day` is `2`, the output will be "Day is: Tuesday".
- If `day` is not `1` or `2`, the default case will be executed, and the output will be "Day is: Invalid day".

The switch-case statement provides a convenient way to implement multi-way branching in Java, improving the readability and maintainability of your code.
