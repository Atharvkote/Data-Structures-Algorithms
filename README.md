<img src="Assests/DSA.jpg" height=200px width=400px>

# Data Structures and Algorithms in Java

## Overview
This README provides a comprehensive guide to data structures and algorithms in Java. It covers fundamental concepts, theoretical explanations, and practical usage examples to help you understand and implement efficient data handling and processing in Java.

## Table of Contents
1. [Introduction](#introduction)
2. [Data Structures](#data-structures)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stacks](#stacks)
    - [Queues](#queues)
    - [HashMaps](#hashmaps)
    - [Trees](#trees)
    - [Graphs](#graphs)
3. [Algorithms](#algorithms)
    - [Sorting Algorithms](#sorting-algorithms)
    - [Searching Algorithms](#searching-algorithms)
    - [Graph Algorithms](#graph-algorithms)
4. [Further Reading and Resources](#further-reading-and-resources)
5. [Contact Information](#contact-information)

## Introduction
Data structures are ways to organize and store data efficiently, and algorithms are step-by-step procedures or formulas for solving problems. Understanding these concepts is crucial for writing efficient and effective code. This guide provides an overview of the most commonly used data structures and algorithms in Java, along with their practical applications.

## Data Structures

### Arrays
Arrays are collections of elements identified by index or key. They are stored in contiguous memory locations, which allows constant-time access to elements. Arrays are suitable for scenarios where the size of the data set is known and fixed.

#### Example:
```java
int[] array = new int[10];  // Declaration of an array of integers with size 10
array[0] = 5;  // Assigning value to the first element
System.out.println(array[0]);  // Accessing the first element
```

### Linked Lists
Linked lists are collections of nodes where each node contains data and a reference (link) to the next node in the sequence. They are dynamic in size and allow for efficient insertions and deletions.

#### Types of Linked Lists:
- **Singly Linked List**: Each node points to the next node.
- **Doubly Linked List**: Each node points to both the next and the previous node.

#### Example:
```java
class Node {
    int data;
    Node next;
    Node(int d) { data = d; next = null; }
}

class LinkedList {
    Node head;
    public void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }
}
```

### Stacks
Stacks are Last In First Out (LIFO) data structures where the last element added is the first to be removed. They are used in scenarios such as expression evaluation, syntax parsing, and backtracking algorithms.

#### Example:
```java
import java.util.Stack;

Stack<Integer> stack = new Stack<>();
stack.push(1);  // Pushing element onto the stack
stack.push(2);
System.out.println(stack.pop());  // Popping the top element (outputs 2)
```

### Queues
Queues are First In First Out (FIFO) data structures where the first element added is the first to be removed. They are used in scenarios such as order processing, breadth-first search algorithms, and scheduling tasks.

#### Example:
```java
import java.util.LinkedList;
import java.util.Queue;

Queue<Integer> queue = new LinkedList<>();
queue.add(1);  // Adding element to the queue
queue.add(2);
System.out.println(queue.poll());  // Removing the first element (outputs 1)
```

### HashMaps
HashMaps store key-value pairs, allowing for fast retrieval based on the key. They are used in scenarios requiring constant-time complexity for insertion, deletion, and lookup operations.

#### Example:
```java
import java.util.HashMap;

HashMap<String, Integer> map = new HashMap<>();
map.put("One", 1);  // Adding key-value pair
map.put("Two", 2);
System.out.println(map.get("One"));  // Retrieving value based on key (outputs 1)
```

### Trees
Trees are hierarchical data structures consisting of nodes, with a single root node and child nodes forming subtrees. Binary trees, where each node has at most two children, are commonly used. They are used in scenarios such as hierarchical data representation, search operations, and network routing algorithms.

#### Types of Trees:
- **Binary Tree**: Each node has at most two children.
- **Binary Search Tree (BST)**: A binary tree with ordered nodes.

### Graphs
Graphs consist of vertices (nodes) connected by edges. They are used to represent networks, relationships, and various real-world scenarios.

#### Example:
```java
import java.util.*;

class Graph {
    private int V;
    private LinkedList<Integer> adj[];

    Graph(int v) {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }

    void addEdge(int v, int w) {
        adj[v].add(w);
    }
}
```

## Algorithms

### Sorting Algorithms
Sorting algorithms arrange elements in a particular order (ascending or descending).

#### Bubble Sort
Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. It has a time complexity of O(n^2).

#### Quick Sort

Quick Sort is a divide-and-conquer algorithm that selects a pivot element and partitions the array into two halves, sorting them recursively. It has an average time complexity of O(n log n).

#### Example:
```java
class Sorting {
    public void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);

            quickSort(arr, low, pi-1);
            quickSort(arr, pi+1, high);
        }
    }

    private int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low-1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;

                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap arr[i+1] and arr[high] (or pivot)
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }
}
```

### Searching Algorithms
Searching algorithms find the position of a target element within a data structure.

#### Linear Search
Linear Search scans each element of the list sequentially until the target element is found or the list ends. It has a time complexity of O(n).

#### Example 
```java
class LinearSearch {
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }
}



```
#### Binary Search
Binary Search works on sorted arrays by repeatedly dividing the search interval in half. It has a time complexity of O(log n).

```java
import java.util.*;

class Graph {
    private int V;
    private LinkedList<Integer> adj[];

    Graph(int v) {
        V = v;
        adj = new LinkedList[v];
        for (int i = 0; i < v; ++i)
            adj[i] = new LinkedList();
    }

    void addEdge(int v, int w) {
        adj[v].add(w);
    }

    void DFSUtil(int v, boolean visited[]) {
        visited[v] = true;
        System.out.print(v + " ");

        Iterator<Integer> it = adj[v].listIterator();
        while (it.hasNext()) {
            int n = it.next();
            if (!visited[n])
                DFSUtil(n, visited);
        }
    }

    void DFS(int v) {
        boolean visited[] = new boolean[V];

        DFSUtil(v, visited);
    }

    void BFS(int v) {
        boolean visited[] = new boolean[V];

        LinkedList<Integer> queue = new LinkedList<Integer>();

        visited[v] = true;
        queue.add(v);

        while (queue.size() != 0) {
            v = queue.poll();
            System.out.print(v + " ");

            Iterator<Integer> it = adj[v].listIterator();
            while (it.hasNext()) {
                int n = it.next();
                if (!visited[n]) {
                    visited[n] = true;
                    queue.add(n);
                }
            }
        }
    }
}


```

### Example 
```java
class BinarySearch {
    public static int binarySearch(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                return mid; // Return the index if found
            } else if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1; // Return -1 if not found
    }
}



```

### Graph Algorithms
Graph algorithms operate on graph data structures to solve problems such as pathfinding and connectivity.

#### Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking. It is used in scenarios requiring traversal or searching in tree or graph structures.

#### Breadth-First Search (BFS)
BFS explores all vertices at the present depth before moving on to vertices at the next depth level. It is used in scenarios requiring the shortest path or level-order traversal in trees or graphs.

## Further Reading and Resources
- [Java Documentation](https://docs.oracle.com/javase/8/docs/)
- [GeeksforGeeks Data Structures](https://www.geeksforgeeks.org/data-structures/)
- [Introduction to Algorithms by Cormen, Leiserson, Rivest, and Stein](https://mitpress.mit.edu/books/introduction-algorithms)

## Contact Information
For questions or support, please contact:
- **Email**: support@datastucturesandalgorithms.com
- **GitHub**: [DSAJava](https://github.com/DSAJava)

