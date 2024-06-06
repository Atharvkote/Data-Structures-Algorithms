# Looping Statements in Java

This README provides an overview of looping statements in Java, including `for`, `while`, `foreach` (enhanced for loop), nested `for`, and `do-while` loops.

## 1. For Loop

The `for` loop executes a block of code repeatedly until a specified condition evaluates to false.

### Syntax

```java
for (initialization; condition; update) {
    // Block of code to be executed
}
```

### Example

```java
for (int i = 1; i <= 5; i++) {
    System.out.println("Count: " + i);
}
```

## 2. While Loop

The `while` loop executes a block of code as long as a specified condition is true.

### Syntax

```java
while (condition) {
    // Block of code to be executed
}
```

### Example

```java
int i = 1;
while (i <= 5) {
    System.out.println("Count: " + i);
    i++;
}
```

## 3. Foreach (Enhanced For Loop)

The foreach loop iterates over elements in an array or collection without explicitly controlling the iteration.

### Syntax

```java
for (dataType variableName : arrayName) {
    // Block of code to be executed
}
```

### Example

```java
int[] numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    System.out.println("Number: " + num);
}
```

## 4. Nested For Loop

A nested `for` loop is a loop inside another loop. It's often used to iterate over a two-dimensional array or to generate a combination of outputs.

### Example

```java
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        System.out.println("i: " + i + ", j: " + j);
    }
}
```

## 5. Do-While Loop

The `do-while` loop is similar to the `while` loop, but it executes the block of code at least once before checking the condition.

### Syntax

```java
do {
    // Block of code to be executed
} while (condition);
```

### Example

```java
int i = 1;
do {
    System.out.println("Count: " + i);
    i++;
} while (i <= 5);
```

