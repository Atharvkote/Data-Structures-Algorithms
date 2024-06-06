# Java Basic Data Types and Variables Overview

This README provides an overview of basic data types and variables in Java. It covers primitive data types, their ranges, default values, variable declaration, and the use of the `var` keyword for local variable type inference.

## 1. Primitive Data Types

Java has eight primitive data types:

1. `byte`: 8-bit signed integer (-128 to 127)
2. `short`: 16-bit signed integer (-32,768 to 32,767)
3. `int`: 32-bit signed integer (-2^31 to 2^31 - 1)
4. `long`: 64-bit signed integer (-2^63 to 2^63 - 1)
5. `float`: 32-bit floating point (IEEE 754)
6. `double`: 64-bit floating point (IEEE 754)
7. `char`: 16-bit Unicode character (0 to 65,535)
8. `boolean`: Represents true or false values

```java
byte b = 100;
short s = 1000;
int i = 100000;
long l = 10000000000L;
float f = 3.14f;
double d = 3.14159;
char c = 'A';
boolean bool = true;
```

## 2. Variable Declaration

Variables are declared with a specific data type and optional modifiers.

```java
<DataType> <variableName>;
```

### Example

```java
int age;
double price;
char grade;
boolean isPassed;
```

## 3. Default Values

Java assigns default values to variables if no explicit value is assigned:

- `0` for numeric types (byte, short, int, long, float, double)
- `false` for boolean
- `\u0000` for char

## 4. Naming Conventions

- Variable names should be meaningful and descriptive.
- Use camelCase for variable names.
- Start variable names with a lowercase letter.
- Constants should be in uppercase with underscores.

```java
int studentAge;
double productPrice;
final int MAX_VALUE = 100;
```

## 5. Constants

Constants are declared using the `final` keyword and should be initialized at the time of declaration or in a constructor.

```java
final double PI = 3.14159;
final int DAYS_IN_WEEK;

public MyClass() {
    DAYS_IN_WEEK = 7;
}
```

Got it, let me add a rule for variable declarations:

## 2. Variable Declaration

Variables are declared with a specific data type and optional modifiers.

```java
<DataType> <variableName>;
```

### 6.Rule for Variable Declaration

- Variable names should be meaningful and descriptive.
- Use camelCase for variable names.
- Start variable names with a lowercase letter.
- Avoid using single characters or abbreviations for variable names unless it's a widely accepted convention (e.g., `i` for loop counters).
- Variable names should not start with a digit.
- Variable names should not be Java keywords or reserved words.

### Example

```java
int age;
double price;
char grade;
boolean isPassed;
```

