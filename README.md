# Data Structures and Algorithms
<p align="center">
<img align="center" src="Assests/dsa_logo.jpg" height=200 width=300>
</p>

## Syllabus

### Data Structures

| Data Structure         | Subtypes                                  |
|------------------------|-------------------------------------------|
| Arrays                 |                                           |
| Linked Lists           | Singly Linked List, Doubly Linked List, Circular Linked List |
| Stacks                 |                                           |
| Queues                 | Circular Queue, Priority Queue            |
| Trees                  | Binary Trees, Binary Search Trees, AVL Trees, Red-Black Trees |
| Heaps                  | Min Heap, Max Heap                        |
| Hash Tables            |                                           |
| Graphs                 | Adjacency Matrix, Adjacency List          |

### Algorithms

| Algorithm Type         | Algorithms                                                |
|------------------------|-----------------------------------------------------------|
| Sorting Algorithms     | Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort |
| Searching Algorithms   | Linear Search, Binary Search                             |
| Graph Algorithms       | Depth First Search (DFS), Breadth First Search (BFS), Dijkstra's Algorithm, A* Search |
| Dynamic Programming    | Fibonacci Sequence, Knapsack Problem, Longest Common Subsequence |
| Greedy Algorithms      | Coin Change Problem, Activity Selection                  |


## Java

**_Java_** is a versatile programming language known for its Object-Oriented Programming (OOP) capabilities, which make it a strong choice for implementing data structures and algorithms.

### Specialities
- **Object-Oriented Programming**: Java's strong OOP principles make it easier to model complex systems using data structures.
- **Rich Standard Library**: Java has a comprehensive set of libraries that support data structures and algorithms, reducing the need for custom implementations.
- **Portability**: Java programs can run on any device that has a Java Virtual Machine (JVM), ensuring wide compatibility.



## C

**_C_** is a powerful language that gives you control over system resources, making it ideal for low-level data structure manipulation and algorithm implementation.

### Specialities
- **Efficiency**: C provides direct access to memory and system resources, enabling highly efficient code.
- **Control**: With pointers and manual memory management, C allows for fine-tuned control over how data is stored and accessed.
- **Speed**: Programs written in C often execute faster than those written in higher-level languages due to its minimal runtime overhead.



## Python

**_Python_** is an accessible and easy-to-learn language, perfect for quickly prototyping and implementing data structures and algorithms.</br>
`Note: Python implementations are coming soon!`

### Specialities
- **Ease of Use**: Python's simple and readable syntax makes it a great choice for beginners and for rapid development.
- **Rich Libraries**: Python boasts an extensive standard library and numerous third-party modules that facilitate the implementation of various data structures and algorithms.
- **Flexibility**: Python is highly flexible, allowing for quick iterations and prototyping.



## Installation and Setup

To get started with the repository, clone it to your local machine using:

```sh
git clone https://github.com/your-username/data-structures-algorithms.git
```

### Java Setup

- Ensure you have JDK installed.
- Navigate to the Java directory and compile the files using `javac`.

### C Setup

- Ensure you have a C compiler installed (e.g., GCC).
- Navigate to the C directory and compile the files using `gcc`.

### Python Setup

- Ensure you have Python installed.
- Navigate to the Python directory (coming soon).


### Java Directory Structure

```js
data-structures-algorithms/
├── java/
│   ├── arrays/
│   │   ├── Array.java
│   │   ├── ArrayTest.java
│   ├── linkedlists/
│   │   ├── SinglyLinkedList.java
│   │   ├── DoublyLinkedList.java
│   │   ├── LinkedListTest.java
│   ├── stacks/
│   │   ├── Stack.java
│   │   ├── StackTest.java
│   ├── queues/
│   │   ├── CircularQueue.java
│   │   ├── PriorityQueue.java
│   │   ├── QueueTest.java
│   ├── trees/
│   │   ├── BinaryTree.java
│   │   ├── BinarySearchTree.java
│   │   ├── AVLTree.java
│   │   ├── RedBlackTree.java
│   │   ├── TreeTest.java
│   ├── heaps/
│   │   ├── MinHeap.java
│   │   ├── MaxHeap.java
│   │   ├── HeapTest.java
│   ├── hashtables/
│   │   ├── HashTable.java
│   │   ├── HashTableTest.java
│   ├── graphs/
│   │   ├── AdjacencyMatrixGraph.java
│   │   ├── AdjacencyListGraph.java
│   │   ├── GraphTest.java
│   ├── sorting/
│   │   ├── BubbleSort.java
│   │   ├── QuickSort.java
│   │   ├── MergeSort.java
│   │   ├── SortingTest.java
│   ├── searching/
│   │   ├── LinearSearch.java
│   │   ├── BinarySearch.java
│   │   ├── SearchingTest.java
│   ├── dynamic_programming/
│   │   ├── Fibonacci.java
│   │   ├── Knapsack.java
│   │   ├── DynamicProgrammingTest.java
│   ├── greedy/
│   │   ├── CoinChange.java
│   │   ├── ActivitySelection.java
│   │   ├── GreedyAlgorithmsTest.java
```

### C Directory Structure

```css
data-structures-algorithms/
├── c/
│   ├── arrays/
│   │   ├── array.c
│   │   ├── array.h
│   │   ├── array_test.c
│   ├── linkedlists/
│   │   ├── singly_linked_list.c
│   │   ├── singly_linked_list.h
│   │   ├── doubly_linked_list.c
│   │   ├── doubly_linked_list.h
│   │   ├── linked_list_test.c
│   ├── stacks/
│   │   ├── stack.c
│   │   ├── stack.h
│   │   ├── stack_test.c
│   ├── queues/
│   │   ├── circular_queue.c
│   │   ├── circular_queue.h
│   │   ├── priority_queue.c
│   │   ├── priority_queue.h
│   │   ├── queue_test.c
│   ├── trees/
│   │   ├── binary_tree.c
│   │   ├── binary_tree.h
│   │   ├── binary_search_tree.c
│   │   ├── binary_search_tree.h
│   │   ├── avl_tree.c
│   │   ├── avl_tree.h
│   │   ├── red_black_tree.c
│   │   ├── red_black_tree.h
│   │   ├── tree_test.c
│   ├── heaps/
│   │   ├── min_heap.c
│   │   ├── min_heap.h
│   │   ├── max_heap.c
│   │   ├── max_heap.h
│   │   ├── heap_test.c
│   ├── hashtables/
│   │   ├── hashtable.c
│   │   ├── hashtable.h
│   │   ├── hashtable_test.c
│   ├── graphs/
│   │   ├── adjacency_matrix_graph.c
│   │   ├── adjacency_matrix_graph.h
│   │   ├── adjacency_list_graph.c
│   │   ├── adjacency_list_graph.h
│   │   ├── graph_test.c
│   ├── sorting/
│   │   ├── bubble_sort.c
│   │   ├── quick_sort.c
│   │   ├── merge_sort.c
│   │   ├── sorting_test.c
│   ├── searching/
│   │   ├── linear_search.c
│   │   ├── binary_search.c
│   │   ├── searching_test.c
│   ├── dynamic_programming/
│   │   ├── fibonacci.c
│   │   ├── knapsack.c
│   │   ├── dynamic_programming_test.c
│   ├── greedy/
│   │   ├── coin_change.c
│   │   ├── activity_selection.c
│   │   ├── greedy_algorithms_test.c
```

### Usage Example

#### Java

For compiling and running a Java file:

```sh
cd java/linkedlists
javac SinglyLinkedList.java
java SinglyLinkedList
```

#### C

For compiling and running a C file:

```sh
cd c/linkedlists
gcc singly_linked_list.c -o singly_linked_list
./singly_linked_list
```
#### Python (Coming Soon)

```sh
cd python
python your_script.py
```

## Examples and Demos

Refer to the `examples` directory in each language folder for usage examples and demonstrations of each data structure and algorithm.


## Testing

### Java Testing

Use JUnit for testing Java implementations.

### C Testing

Use `assert.h` for testing C implementations.

### Python Testing (Coming Soon)

Use `unittest` for testing Python implementations.


## Documentation

For more detailed documentation, please visit our [Wiki](https://github.com/your-username/data-structures-algorithms/wiki).


## Contributors

We appreciate all contributions. Please see the [Contributors](https://github.com/your-username/data-structures-algorithms/graphs/contributors) page for a list of all contributors.


## Issues and Bugs

To report issues or bugs, please open an issue on our [Issues](https://github.com/your-username/data-structures-algorithms/issues) page.

## Contact

For any questions or suggestions, feel free to open an issue or contact us directly.

## Thats It 🚀

Thank you for visiting our repository! We hope you find these resources useful for your learning and development.
