# Inheritance in Java

In Java, Inheritance is an important pillar of OOP(Object-Oriented Programming). It is the mechanism in Java by which one class is allowed to inherit the features(fields and methods) of another class. In Java, Inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class. In addition, you can add new fields and methods to your current class as well.  

## Inheritance Example :
Basic C Structure :

```bash
// Java Program to illustrate Inheritance

 import java.io.*;
 // Base or Super Class
class Employee {
   int salary = 60000;
}
// Inherited or Sub Class
class Engineer extends Employee {
     int benefits = 10000;
}
 // Driver Class
class Gfg {
public static void main(String args[])
{
Engineer E1 = new Engineer();
System.out.println("Salary : " + E1.salary
+ "\nBenefits : " + E1.benefits);
    }
}
```
    

### Why Do We Need Java Inheritance?

**Code Reusability :**
The code written in the Superclass is common to all subclasses. Child classes can directly use the parent class code.

**Method Overriding :**
Method Overriding is achievable only through Inheritance. It is one of the ways by which Java achieves Run Time Polymorphism.

**Abstraction :**
The concept of abstract where we do not have to provide all details is achieved through inheritance. Abstraction only shows the functionality to the user.
