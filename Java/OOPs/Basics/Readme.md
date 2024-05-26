<img src="../../Essentials/JavaBook.jpg" hieght=300 width=400>

# Basics of Object-Oriented Programming (OOP) in Java

## Introduction
Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to model real-world entities. It helps in organizing code in a more modular and reusable way. Java is a widely-used OOP language that incorporates the key principles of OOP: encapsulation, inheritance, polymorphism, and abstraction.

This guide covers the fundamental concepts of OOP in Java.

## Contents
- [Objects](#objects)
- [Class](#class)
- [Method](#method)
- [Object Instantiation](#object-instantiation)
- [Getter](#getter)
- [Setter](#setter)
- [Fields](#fields)
- [Principles of OOP](#principles-of-oop)
  - [Encapsulation](#encapsulation)
  - [Inheritance](#inheritance)
  - [Polymorphism](#polymorphism)
  - [Abstraction](#abstraction)

### Objects
In OOP, an object is an instance of a class. Objects are the basic units of OOP and represent real-world entities. Each object has state (attributes) and behavior (methods).

### Class
A class is a blueprint for creating objects. It defines the attributes and behaviors that the objects created from the class can have.

```java
public class Car {
    // Fields (Attributes)
    private String color;
    private String model;
    private int year;

    // Constructor
    public Car(String color, String model, int year) {
        this.color = color;
        this.model = model;
        this.year = year;
    }

    // Methods (Behaviors)
    public void displayDetails() {
        System.out.println("Model: " + model + ", Color: " + color + ", Year: " + year);
    }
}
```

### Method
A method is a block of code that performs a specific task. Methods define the behavior of an object.

```java
public void displayDetails() {
    System.out.println("Model: " + model + ", Color: " + color + ", Year: " + year);
}
```

### Object Instantiation
Object instantiation is the process of creating an object from a class. In Java, this is done using the `new` keyword.

```java
public class Main {
    public static void main(String[] args) {
        // Instantiating objects of the Car class
        Car car1 = new Car("Red", "Toyota", 2020);
        Car car2 = new Car("Blue", "Honda", 2018);

        // Calling methods on the objects
        car1.displayDetails();
        car2.displayDetails();
    }
}
```

### Getter
A getter is a method that retrieves the value of a private field. It is used to provide controlled access to the fields of a class.

```java
public class Car {
    private String color;

    public Car(String color) {
        this.color = color;
    }

    // Getter method
    public String getColor() {
        return color;
    }
}
```

### Setter
A setter is a method that sets or updates the value of a private field. It is used to provide controlled access to modify the fields of a class.

```java
public class Car {
    private String color;

    public Car(String color) {
        this.color = color;
    }

    // Setter method
    public void setColor(String color) {
        this.color = color;
    }
}
```

### Fields
Fields, also known as attributes or properties, are variables that hold the state of an object. Fields are defined within a class.

```java
public class Car {
    // Fields
    private String color;
    private String model;
    private int year;
}
```

## Principles of OOP

### Encapsulation
Encapsulation is the mechanism of wrapping the data (fields) and code (methods) together as a single unit. In encapsulation, the variables of a class are hidden from other classes and can be accessed only through the methods of their current class. This is also known as data hiding.

```java
public class Car {
    private String color;

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
}
```

### Inheritance
Inheritance is a mechanism where one class acquires the properties (fields) and behaviors (methods) of a parent class. This helps in code reusability and method overriding.

```java
public class Vehicle {
    public void start() {
        System.out.println("Vehicle is starting");
    }
}

public class Car extends Vehicle {
    public void start() {
        System.out.println("Car is starting");
    }
}
```

### Polymorphism
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance. Polymorphism allows methods to do different things based on the object it is acting upon, even though they share the same name.

```java
public class Vehicle {
    public void start() {
        System.out.println("Vehicle is starting");
    }
}

public class Car extends Vehicle {
    @Override
    public void start() {
        System.out.println("Car is starting");
    }
}

public class Main {
    public static void main(String[] args) {
        Vehicle myCar = new Car();
        myCar.start();  // Outputs: Car is starting
    }
}
```

### Abstraction
Abstraction is the concept of hiding the complex implementation details and showing only the essential features of the object. It can be achieved with abstract classes and interfaces.

```java
abstract class Vehicle {
    abstract void start();
}

public class Car extends Vehicle {
    @Override
    void start() {
        System.out.println("Car is starting");
    }
}
```
