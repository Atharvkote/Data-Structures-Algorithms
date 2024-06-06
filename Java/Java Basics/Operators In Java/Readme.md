# Java Operators Overview

This README provides an overview of various operators in Java, categorized into Arithmetic, Relational, Logical, Bitwise, and Assignment operators. It includes examples, explanations, and their respective outputs for better understanding.

## 1. Arithmetic Operators

Arithmetic operators perform mathematical operations on two operands (binary operators) or a single operand (unary operators).

### Binary Operators
- `+` : Addition
- `-` : Subtraction
- `*` : Multiplication
- `/` : Division
- `%` : Modulus (Remainder of division)

```java
int A = 10;
int B = 5;
System.out.println("Addition = " + (A + B)); // Output: Addition = 15
System.out.println("Subtraction = " + (A - B)); // Output: Subtraction = 5
System.out.println("Multiplication = " + A * B); // Output: Multiplication = 50
System.out.println("Division = " + A / B); // Output: Division = 2
System.out.println("Remainder (Division) = " + A % B); // Output: Remainder (Division) = 0
```

### Unary Operators
- `++` : Increment (Pre/Post)
- `--` : Decrement (Pre/Post)

**Pre-Increment/Decrement:**
1. Value changes first.
2. Then the value is used.

**Post-Increment/Decrement:**
1. Value is used first.
2. Then the value is changed.

```java
int a = 10;
int b = ++a; // Pre-Increment: a = 11, b = 11
System.out.println(a); // Output: 11
System.out.println(b); // Output: 11

a = 10;
b = a++; // Post-Increment: a = 11, b = 10
System.out.println(a); // Output: 11
System.out.println(b); // Output: 10

a = 10;
b = --a; // Pre-Decrement: a = 9, b = 9
System.out.println(a); // Output: 9
System.out.println(b); // Output: 9

a = 10;
b = a--; // Post-Decrement: a = 9, b = 10
System.out.println(a); // Output: 9
System.out.println(b); // Output: 10
```

## 2. Relational Operators

Relational operators compare two operands and return a boolean result.

- `==` : Equal to
- `!=` : Not equal to
- `>` : Greater than
- `<` : Less than
- `>=` : Greater than or equal to
- `<=` : Less than or equal to

```java
int A = 10;
int B = 5;
System.out.println(A == B); // Output: false
System.out.println(A != B); // Output: true
```

## 3. Logical Operators

Logical operators are used to perform logical operations on boolean expressions.

- `&&` : Logical AND (true if both operands are true)
- `||` : Logical OR (true if at least one operand is true)
- `!` : Logical NOT (inverts the boolean value)

```java
int A = 10;
int B = 5;
System.out.println(A < B && B == A); // Output: false
System.out.println(A > B || B == A); // Output: true
System.out.println(!(B == A)); // Output: true
```

## 4. Assignment Operators

Assignment operators assign values to variables.

- `=` : Simple assignment
- `+=` : Addition assignment
- `-=` : Subtraction assignment
- `*=` : Multiplication assignment
- `/=` : Division assignment

```java
int A = 10;
A = A + 5;
System.out.println(A); // Output: 15

A += 5; // Equivalent to A = A + 5
System.out.println(A); // Output: 20
```

## 5. Operator Precedence

Operator precedence determines the order in which operators are evaluated in an expression.

### Example

```java
int x = 3 * 4 - 1;
System.out.println(x); // Output: 11
```

### Operator Precedence Table

| Operator            | Description                              | Associativity |
|---------------------|------------------------------------------|---------------|
| Postfix Increment/Decrement | `++`, `--`                        | Left to Right |
| Prefix Increment/Decrement, Unary | `++`, `--`, `+`, `-`, `~`, `!` | Right to Left |
| Multiplicative      | `*`, `/`, `%`                           | Left to Right |
| Additive            | `+`, `-`                                | Left to Right |
| Shift               | `<<`, `>>`, `>>>`                       | Left to Right |
| Relational          | `<`, `>`, `<=`, `>=`, `instanceof`      | Left to Right |
| Equality            | `==`, `!=`                              | Left to Right |
| Bitwise AND         | `&`                                      | Left to Right |
| Bitwise Exclusive OR| `^`                                      | Left to Right |
| Bitwise Inclusive OR| `|`                                      | Left to Right |
| Logical AND         | `&&`                                     | Left to Right |
| Logical OR          | `||`                                     | Left to Right |
| Ternary             | `?:`                                     | Right to Left |
| Assignment          | `=`, `+=`, `-=` etc.                    | Right to Left |

This table provides the precedence order of different operators in Java, along with their associativity.
**Note:** If an expression has two operators with the same precedence, the expression is evaluated according to its associativity.

- Prefix increment and decrement, and unary: Right to left
- Ternary: Right to left
- Assignment: Right to left

### Example with Precedence

```java
int x = 2;
int y = 5;
System.out.println(x * (y / x)); // Output: 4 (2 * (5 / 2) = 2 * 2)
```

This concludes the overview of Java operators. Use this guide as a quick reference to understand and apply different operators in your Java programs.
