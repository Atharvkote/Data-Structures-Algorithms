![logo](Assests/C.png)

# Data Structures and Algorithms in C

This Repository provides a comprehensive guide to data structures and algorithms in C. It covers fundamental concepts, theoretical explanations, and practical usage examples to help you understand and implement efficient data handling and processing in C.

## Table of Contents
1. [Introduction](#introduction)
2. [Data Structures](#data-structures)
    - [Arrays](#arrays)
    - [Linked Lists](#linked-lists)
    - [Stacks](#stacks)
    - [Queues](#queues)
    - [Hash Tables](#hash-tables)
    - [Trees](#trees)
    - [Graphs](#graphs)
3. [Algorithms](#algorithms)
    - [Sorting Algorithms](#sorting-algorithms)
    - [Searching Algorithms](#searching-algorithms)
    - [Graph Algorithms](#graph-algorithms)
4. [Further Reading and Resources](#further-reading-and-resources)
5. [Contact Information](#contact-information)

## Introduction
Data structures are ways to organize and store data efficiently, and algorithms are step-by-step procedures or formulas for solving problems. Understanding these concepts is crucial for writing efficient and effective code. This guide provides an overview of the most commonly used data structures and algorithms in C, along with their practical applications.

## Data Structures

### Arrays
Arrays are collections of elements identified by index or key. They are stored in contiguous memory locations, which allows constant-time access to elements. Arrays are suitable for scenarios where the size of the data set is known and fixed.

#### Example:
```c
#include <stdio.h>

int main() {
    int array[10];  // Declaration of an array of integers with size 10
    array[0] = 5;  // Assigning value to the first element
    printf("%d\n", array[0]);  // Accessing the first element
    return 0;
}
```

### Linked Lists
Linked lists are collections of nodes where each node contains data and a reference (link) to the next node in the sequence. They are dynamic in size and allow for efficient insertions and deletions.

#### Types of Linked Lists:
- **Singly Linked List**: Each node points to the next node.
- **Doubly Linked List**: Each node points to both the next and the previous node.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
```

### Stacks
Stacks are Last In First Out (LIFO) data structures where the last element added is the first to be removed. They are used in scenarios such as expression evaluation, syntax parsing, and backtracking algorithms.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void push(struct Stack* stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = item;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->arr[stack->top--];
}
```

### Queues
Queues are First In First Out (FIFO) data structures where the first element added is the first to be removed. They are used in scenarios such as order processing, breadth-first search algorithms, and scheduling tasks.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void enqueue(struct Queue* queue, int item) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    queue->arr[++queue->rear] = item;
}

int dequeue(struct Queue* queue) {
    if (queue->front > queue->rear) {
        printf("Queue Underflow\n");
        exit(1);
    }
    return queue->arr[queue->front++];
}
```

### Hash Tables
Hash tables store key-value pairs, allowing for fast retrieval based on the key. They are used in scenarios requiring constant-time complexity for insertion, deletion, and lookup operations.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct HashNode {
    int key;
    int value;
    struct HashNode* next;
};

struct HashTable {
    struct HashNode* table[SIZE];
};

int hashCode(int key) {
    return key % SIZE;
}

void insert(struct HashTable* ht, int key, int value) {
    int hashIndex = hashCode(key);
    struct HashNode* newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    if (ht->table[hashIndex] == NULL) {
        ht->table[hashIndex] = newNode;
    } else {
        newNode->next = ht->table[hashIndex];
        ht->table[hashIndex] = newNode;
    }
}
```

### Trees
Trees are hierarchical data structures consisting of nodes, with a single root node and child nodes forming subtrees. Binary trees, where each node has at most two children, are commonly used. They are used in scenarios such as hierarchical data representation, search operations, and network routing algorithms.

#### Types of Trees:
- **Binary Tree**: Each node has at most two children.
- **Binary Search Tree (BST)**: A binary tree with ordered nodes.

### Graphs
Graphs consist of vertices (nodes) connected by edges. They are used to represent networks, relationships, and various real-world scenarios.

#### Example:
```c
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

struct Graph {
    int V;
    int** adjMatrix;
};

struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = vertices;
    graph->adjMatrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        graph->adjMatrix[i] = (int*)malloc(vertices * sizeof(int));
        for (int j = 0; j < vertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
}
```

## Algorithms

### Sorting Algorithms
Sorting algorithms arrange elements ina particular order (ascending or descending).

#### Bubble Sort
Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. It has a time complexity of O(n^2).

### Example:
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
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
```

#### Quick Sort
Quick Sort is a divide-and-conquer algorithm that selects a pivot element and partitions the array into two halves, sorting them recursively. It has an average time complexity of O(n log n).

### Example:
```c
#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
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
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

### Searching Algorithms
Searching algorithms find the position of a target element within a data structure.

#### Linear Search
Linear Search scans each element of the list sequentially until the target element is found or the list ends. It has a time complexity of O(n).

### Example:
```c
#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}
```

#### Binary Search
Binary Search works on sorted arrays by repeatedly dividing the search interval in half. It has a time complexity of O(log n).

### Example:
```c
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
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
```

### Graph Algorithms
Graph algorithms operate on graph data structures to solve problems such as pathfinding and connectivity.

#### Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking. It is used in scenarios requiring traversal or searching in tree or graph structures.

#### Breadth-First Search (BFS)
BFS explores all vertices at the present depth before moving on to vertices at the next depth level. It is used in scenarios requiring the shortest path or level-order traversal in trees or graphs.

## Further Reading and Resources
- [C Programming Documentation](https://en.cppreference.com/w/c)
- [GeeksforGeeks Data Structures and Algorithms in C](https://www.geeksforgeeks.org/c-programming-language/)
- [Algorithms in C by Robert Sedgewick](https://www.amazon.com/Algorithms-C-Parts-1-4-Fundamentals/dp/0201314525)

## Contact Information
For questions or support, please contact:
- **Email**: atharvkote3@gmail.com 
- **GitHub Link**:
  ```sudo
  https://github.com/Atharvkote/Data-Structures-Algorithms.git
