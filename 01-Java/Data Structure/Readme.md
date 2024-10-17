> [!TIP]
> 1. **Iteration Over a Data Structures :**
> - To Iterate over a Data Structures (Array,LinkedList,Queue, Stack) or a Collection ( ArrayList , HashSet , HastMap ,etc)
> - We Generally use for loop with a `Iterative Variable [i]`,

- **For Example**
  
```java
 // For Loop Iterating over  ArrayList :
        List<String> myList = new ArrayList<String>(); 

        // Adding elements to the list
        // Custom inputs
        myList.add("A");
        myList.add("B");
        myList.add("C");
        myList.add("D");

        // For loop for iterating over the List

        for (int i = 0; i < myList.size(); i++) { 

            // Print all elements of List
            System.out.println(myList.get(i));

        }
```
>[!IMPORTANT]
> - But This can Done in a More Simple way By Using a </br>
```For Each Loop``` 
- **For Example :**
```java
 // Creating an array list
    ArrayList<String> languages = new ArrayList<>();

    languages.add("Java");
    languages.add("JavaScript");
    languages.add("Python");

    System.out.println("ArrayList:
" + languages);

   // Using forEach loop

    for(String language : languages) {
      System.out.print(language);
      System.out.print(", ");
    }
```
