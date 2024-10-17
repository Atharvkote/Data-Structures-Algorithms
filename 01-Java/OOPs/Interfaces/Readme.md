# Interface in Java

The interface in Java is a mechanism to achieve abstraction. There can be only abstract methods in the Java interface, not the method body. It is used to achieve abstraction and multiple inheritances in Java using Interface. In other words, you can say that interfaces can have abstract methods and variables. It cannot have a method body. Java Interface also represents the IS-A relationship.

When we decide on a type of entity by its behavior and not via attribute we should define it as an interface.

## Uses of Interfaces in Java

Uses of Interfaces in Java are mentioned below:

- It is used to achieve total abstraction.
- Since java does not support multiple inheritances in the case of class, by using an interface it can achieve multiple inheritances.
- Any class can extend only 1 class, but can any class implement an infinite number of interfaces.
- It is also used to achieve loose coupling.
- Interfaces are used to implement abstraction.

### Interfaces Example

```bash
// Java program to demonstrate working of
// interface

import java.io.*;

// A simple interface
interface In1 {
  
    // public, static and final
    final int a = 10;

    // public and abstract
    void display();
}

// A class that implements the interface.
class TestClass implements In1 {
  
    // Implementing the capabilities of
    // interface.
    public void display(){ 
      System.out.println("Geek"); 
    }

    // Driver Code
    public static void main(String[] args)
    {
        TestClass t = new TestClass();
        t.display();
        System.out.println(a);
    }
}

```
    
