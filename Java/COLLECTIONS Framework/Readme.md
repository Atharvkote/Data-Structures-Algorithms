# Collections In Java

![logo](Assests/Logo.webp)

The Java collections framework is a set of classes and interfaces that implement commonly reusable collection data structures. Although referred to as a framework, it works in a manner of a library. The collections framework provides both interfaces that define various collections and classes that implement them.
<br/>

## Sneak Peak of Collections
<img align="center" src="Assests/Flowchart.png">

## Classes and Interfaces
<img align="center" src="Assests/Framework.jpg">

## Set Interfaces
<img align="center" src="Assests/Sets.jpg" hight=10>

The set interface is present in java.util package and extends the Collection interface. It is an unordered collection of objects in which duplicate values cannot be stored. It is an interface that implements the mathematical set. This interface contains the methods inherited from the Collection interface and adds a feature that restricts the insertion of the duplicate elements. There are two interfaces that extend the set implementation namely SortedSet and NavigableSet.

<img align="center" src="Assests/SetFlow.png">

In the above image, the navigable set extends the sorted set interface. Since a set doesn’t retain the insertion order, the navigable set interface provides the implementation to navigate through the Set. The class which implements the navigable set is a TreeSet which is an implementation of a self-balancing tree. Therefore, this interface provides us with a way to navigate through this tree.

Declaration: The Set interface is declared as:



## Map Interfaces
<img align="center" src="Assests/Maps.jpg">

## List Interfaces
<img align="center" src="Assests/Lists.jpg">

## Queues Interfaces 
<img align="center" src="Assests/Queue.jpg">


