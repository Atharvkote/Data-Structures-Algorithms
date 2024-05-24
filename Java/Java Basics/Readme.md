# Java Programming Basics

## Overview
Java is a popular, high-level programming language known for its portability, performance, and robust nature. This README provides a comprehensive guide to the basics of Java programming, including input/output statements and fundamental syntax.

## Table of Contents
1. [Introduction](#introduction)
2. [Basic Syntax](#basic-syntax)
    - [Hello World Program](#hello-world-program)
    - [Comments](#comments)
3. [Data Types and Variables](#data-types-and-variables)
4. [Input/Output Statements](#inputoutput-statements)
    - [Output Statements](#output-statements)
    - [Input Statements](#input-statements)
5. [Control Flow Statements](#control-flow-statements)
6. [Example Programs](#example-programs)
7. [Further Reading and Resources](#further-reading-and-resources)
8. [Contact Information](#contact-information)

## Introduction
Java is a versatile and widely-used programming language that follows the object-oriented programming paradigm. It is designed to be platform-independent, allowing code to run on any machine equipped with the Java Virtual Machine (JVM).

## Basic Syntax
### Hello World Program
The simplest Java program is the "Hello World" program. This program prints "Hello, World!" to the console.

```java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
```

### Comments
Comments are used to explain code and are ignored by the compiler.

- **Single-line comments** start with `//`.

```java
// This is a single-line comment
```

- **Multi-line comments** are enclosed within `/*` and `*/`.

```java
/*
 This is a multi-line comment.
 It can span multiple lines.
*/
```

## Data Types and Variables
Java supports various data types, which are categorized into two groups: primitive and reference types.

### Primitive Data Types
- `int`: integer
- `float`: floating-point number
- `double`: double-precision floating-point number
- `char`: single character
- `boolean`: true or false
- `byte`, `short`, `long`: other integer types

### Variables
Variables are used to store data. Here's how to declare and initialize variables:

```java
int number = 5;
float decimal = 3.14f;
char letter = 'A';
boolean flag = true;
```

## Input/Output Statements
### Output Statements
To display output to the console, use `System.out.print()` and `System.out.println()`.

- `System.out.print()`: Prints text without a newline at the end.

```java
System.out.print("Hello, ");
System.out.print("World!");
```

- `System.out.println()`: Prints text with a newline at the end.

```java
System.out.println("Hello, World!");
```

### Input Statements
To take input from the user, use the `Scanner` class from the `java.util` package.

1. Import the `Scanner` class:

```java
import java.util.Scanner;
```

2. Create a `Scanner` object:

```java
Scanner scanner = new Scanner(System.in);
```

3. Use the `Scanner` methods to read input:

```java
System.out.print("Enter your name: ");
String name = scanner.nextLine();

System.out.print("Enter your age: ");
int age = scanner.nextInt();
```

## Control Flow Statements
Java provides several control flow statements for decision making, looping, and branching.

### If-Else Statement
```java
if (age >= 18) {
    System.out.println("You are an adult.");
} else {
    System.out.println("You are a minor.");
}
```

### Switch Statement
```java
int day = 2;
switch (day) {
    case 1:
        System.out.println("Monday");
        break;
    case 2:
        System.out.println("Tuesday");
        break;
    default:
        System.out.println("Other day");
        break;
}
```

### For Loop
```java
for (int i = 0; i < 5; i++) {
    System.out.println(i);
}
```

### While Loop
```java
int i = 0;
while (i < 5) {
    System.out.println(i);
    i++;
}
```

## Example Programs
### Program to Add Two Numbers
```java
import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();

        int sum = num1 + num2;
        System.out.println("The sum is: " + sum);
    }
}
```

### Program to Check Even or Odd
```java
import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = scanner.nextInt();

        if (num % 2 == 0) {
            System.out.println(num + " is even.");
        } else {
            System.out.println(num + " is odd.");
        }
    }
}
```

## Further Reading and Resources
- [Java Documentation](https://docs.oracle.com/javase/8/docs/)
- [Oracle Java Tutorials](https://docs.oracle.com/javase/tutorial/)
- [GeeksforGeeks Java Tutorials](https://www.geeksforgeeks.org/java/)

## Contact Information
For questions or support, please contact:
- **Email**: atharvkote3@gmail.com
