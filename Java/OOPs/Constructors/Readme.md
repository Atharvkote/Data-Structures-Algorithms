# Constructors In Java

In Java, a Constructor is a block of codes similar to the method. It is called when an instance of the class is created. At the time of calling the constructor, memory for the object is allocated in the memory. It is a special type of method that is used to initialize the object. Every time an object is created using the new() keyword, at least one constructor is called.

### Constructor Exmaple :

```bash

// Java Program to demonstrate
// Constructor
import java.io.*; 
// Driver Class
class Geeks {
    // Constructor
  Geeks()
     {
     super();
System.out.println("Constructor Called");
      }
// main function
public static void main(String[] args){
     Geeks geek = new Geeks();
     }
}
  ```  
