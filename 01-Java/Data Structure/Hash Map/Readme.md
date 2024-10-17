# Hashing In Java

### Introduction to Hashing

Hashing is a technique used for fast data retrieval. It involves converting a key into a unique index (or hash code) using a hash function. This hash code is then used to store and retrieve the corresponding value in a hash table. The primary goal of hashing is to allow quick access to data, typically in constant time \(O(1)\).

### How Hashing Works

1. **Hash Function**: The hash function takes an input key and returns an integer called the hash code. This hash code is then used to determine the index in the hash table where the corresponding value should be stored. The index is usually calculated as `index = hashCode % numberOfBuckets`, ensuring it falls within the array bounds.

2. **Buckets**: The hash table is divided into several buckets, each capable of holding multiple key-value pairs. This division helps in managing and organizing the data efficiently.

3. **Collision Handling**: Collisions occur when different keys produce the same hash code and thus map to the same bucket. These collisions are commonly resolved using a technique called chaining, where each bucket points to a linked list of entries that have the same index.

### Rehashing Steps

Rehashing is the process of resizing the hash table and redistributing the existing entries into a new array of buckets. This usually occurs when the load factor exceeds a predefined threshold. The load factor is defined as the ratio of the number of entries \(n\) to the number of buckets \(N\) (`load factor = n / N`).

1. **Doubling the Number of Buckets**: 
   - When the load factor exceeds the threshold (often set at 0.75), the number of buckets in the hash table is doubled. For example, if the current hash table has 4 buckets, it will be resized to 8 buckets.

2. **Creating a New Array of Buckets**:
   - A new array is created with the increased number of buckets. This new array will temporarily store the redistributed entries.

3. **Rehashing Existing Entries**:
   - Each entry (key-value pair) from the old hash table is removed and reinserted into the new hash table. 
   - The hash function is recalculated for each key to determine its new index in the larger array.
   - This ensures that the entries are distributed more evenly across the new set of buckets, reducing collisions.

4. **Updating References**:
   - The reference to the old array of buckets is replaced with the reference to the new array. 
   - The number of buckets \(N\) is updated to reflect the new size of the hash table.

### Example

Consider a hash table with 4 buckets and entries causing a high load factor, prompting rehashing:

1. **Initial State**:
   - Buckets: 4
   - Entries: 6
   - Load Factor: 6/4 = 1.5 (exceeds threshold)

2. **Doubling the Buckets**:
   - New number of buckets: 8

3. **Creating a New Array**:
   - New bucket array with 8 buckets is created.

4. **Rehashing Entries**:
   - Each entry from the old array is rehashed:
     - Compute new hash code and index for each key.
     - Insert each key-value pair into the new bucket array at the appropriate index.

5. **Updating References**:
   - The old bucket array is replaced with the new bucket array.
   - The total number of buckets \(N\) is now 8.

### Visual Representation

Before Rehashing:
```
Buckets: [0] -> [Key1, Key2]
         [1] -> [Key3]
         [2] -> [Key4]
         [3] -> [Key5, Key6]
```

After Rehashing (with 8 buckets):
```
Buckets: [0] -> [Key1]
         [1] -> []
         [2] -> [Key2]
         [3] -> [Key3]
         [4] -> []
         [5] -> [Key4]
         [6] -> [Key5]
         [7] -> [Key6]
```

### Key Points

- **Load Factor Management**: Rehashing helps keep the load factor within acceptable limits, ensuring efficient performance.
- **Redistribution**: Each entry is moved to a new index based on the new hash calculation, which helps in reducing collisions.
- **Capacity Increase**: Doubling the number of buckets significantly reduces the load factor, improving the distribution of entries.

Rehashing, while computationally intensive, is crucial for maintaining the efficiency and performance of a hash table as it grows. 
