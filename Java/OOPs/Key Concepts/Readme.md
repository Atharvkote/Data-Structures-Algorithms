## Method OverLoading

In Java, method overloading, as we discussed earlier, is a part of the polymorphism concept. This feature allows a class to have more than one method with the same name, as long as the parameters are different. The difference in parameters can be in terms of the number of parameters or the type of parameters. This provides the flexibility to call a similar method for different types of data. 

#### Method OverLoading Example

```bash
public class OverloadingExample {
       //Method to add two integers
       public int add(int a, int b) {
           return a + b;
       }
      //Overloaded method to add two double values
       public double add(double a, double b) {
           return a + b;
  }
       //Overloaded method to add three integers
       public int add(int a, int b, int c) {
           return a + b + c;
}
       public static void main(String[] args) {
           OverloadingExample example = new OverloadingExample();
           //Using the first add method
           System.out.println("Sum of two integers: " + example.add(10, 20));
          //Using the second add method
           System.out.println("Sum of two doubles: " + example.add(10.5, 20.5));


           //Using the third add method
           System.out.println("Sum of three integers: " + example.add(10, 20, 30));
       }
}
```
    


## Method Overiding

In Java, Overriding is a feature that allows a subclass or child class to provide a specific implementation of a method that is already provided by one of its super-classes or parent classes. When a method in a subclass has the same name, the same parameters or signature, and the same return type(or sub-type) as a method in its super-class, then the method in the subclass is said to override the method in the super-class.

### Method Overiding Exmaple :

Basic C Structure :

```bash
// Java program to demonstrate
// method overriding in java
// Base Class
class Parent {
    void show() { System.out.println("Parent's show()"); }
} 
// Inherited class
class Child extends Parent {
    // This method overrides show() of Parent
   @Override void show()
   {
      System.out.println("Child's show()");
   }
} 
// Driver class
class Main {
    public static void main(String[] args)
    {
 // If a Parent type reference refers
// to a Parent object, then Parent's
// show is called
       Parent obj1 = new Parent();
       obj1.show();

// If a Parent type reference refers
// to a Child object Child's show()
// is called. This is called RUN TIME
// POLYMORPHISM.
        Parent obj2 = new Child();
        obj2.show();
     }
}
```
    
## Dynamic Method Dispatch

- When an overridden method is called through a superclass reference, Java determines which version(superclass/subclasses) of that method is to be executed based upon the type of the object being referred to at the time the call occurs. Thus, this determination is made at run time.
  
- At run-time, it depends on the type of the object being referred to (not the type of the reference variable) that determines which version of an overridden method will be executed
  
- A superclass reference variable can refer to a subclass object. This is also known as upcasting. Java uses this fact to resolve calls to overridden methods at run time.

### Dynamic Method Dispatch Exmaple: 
Basic C Structure :

```bash
class Phone{
    public void showTime(){
        System.out.println("Time is 8 am");
    }
    public void on(){
        System.out.println("Turning on Phone...");
    }
}
class SmartPhone extends Phone{
    public void music(){
        System.out.println("Playing music...");
    }
    public void on(){
        System.out.println("Turning on SmartPhone...");
    }
}
public class CWH {
    public static void main(String[] args) {

        Phone obj = new SmartPhone(); // Yes it is allowed
        // SmartPhone obj2 = new Phone(); // Not allowed

        obj.showTime();
        obj.on();
        // obj.music(); Not Allowed
    }
}

```
    
