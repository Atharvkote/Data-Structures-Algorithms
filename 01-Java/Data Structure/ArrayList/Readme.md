# Note 📝 : 

## ArrayList Class in java.util Package

### size()
Returns the number of elements in this list.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
int size = list.size(); // size is 3
```

### isEmpty()
Returns `true` if this list contains no elements.
```java
ArrayList<String> list = new ArrayList<>();
boolean empty = list.isEmpty(); // empty is true
```

### contains(Object o)
Returns `true` if this list contains the specified element.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
boolean containsApple = list.contains("apple"); // containsApple is true
```

### clear()
Removes all of the elements from this list.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
list.clear(); // list is now empty
```

### indexOf(Object o)
Returns the index of the first occurrence of the specified element in this list, or -1 if this list does not contain the element.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
int index = list.indexOf("banana"); // index is 1
```

### lastIndexOf(Object o)
Returns the index of the last occurrence of the specified element in this list, or -1 if this list does not contain the element.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry", "banana"));
int lastIndex = list.lastIndexOf("banana"); // lastIndex is 3
```

### Iterating Over Elements

#### Using for-each Loop
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
for (String fruit : list) {
    System.out.println(fruit);
}
```

#### Using Iterator
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
Iterator<String> iterator = list.iterator();
while (iterator.hasNext()) {
    System.out.println(iterator.next());
}
```

### Sorting

#### Collections.sort()
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("banana", "cherry", "apple"));
Collections.sort(list); // list now contains ["apple", "banana", "cherry"]
```

### Conversion to Array

#### toArray()
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
Object[] array = list.toArray();
```

#### toArray(T[] a)
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry"));
String[] array = list.toArray(new String[0]);
```

### Synchronization

#### Collections.synchronizedList()
```java
List<String> synchronizedList = Collections.synchronizedList(new ArrayList<>(Arrays.asList("apple", "banana", "cherry")));
// Use synchronizedList for thread-safe operations
```

### Sublist

#### subList(int fromIndex, int toIndex)
Returns a view of the portion of this list between the specified `fromIndex`, inclusive, and `toIndex`, exclusive.
```java
ArrayList<String> list = new ArrayList<>(Arrays.asList("apple", "banana", "cherry", "date"));
List<String> sublist = list.subList(1, 3); // sublist contains ["banana", "cherry"]
```

These methods and functionalities cover the essential operations you can perform with an `ArrayList` in Java, providing a comprehensive toolkit for dynamic array manipulation.
