# Maze Paths in a 3x3 Grid

This document explores various pathfinding scenarios in a 3x3 grid, including counting paths, handling obstacles, and moving in three directions.

## Counting and Displaying Paths in a 3x3 Grid

### Explanation
In a 3x3 grid, starting from the top-left corner (0,0) to the bottom-right corner (2,2), movements are restricted to down (D) and right (R).

### Paths in Grid

1. **Path: DDRR**
   
   ```
   S . . 
   D . . 
   D R R 
   ```

2. **Path: DRDR**
   
   ```
   S . . 
   D R . 
   . D R 
   ```

3. **Path: DRRD**
   
   ```
   S . . 
   D R . 
   . . R 
   ```

4. **Path: RDDR**
   
   ```
   S R . 
   . D . 
   . D R 
   ```

5. **Path: RDRD**
   
   ```
   S R . 
   . D R 
   . . D 
   ```

6. **Path: RRDD**
   
   ```
   S R R 
   . . D 
   . . D 
   ```

## Handling Obstacles in the Grid

### Explanation
Consider a scenario where certain cells are blocked (X) in the grid.

#### Example Grid with Obstacles

|| 1 |  2 |  1 |
|---|---|---|----|
|3| S |   |   |
|2| D | X | R |
|1|   |   | E |

- **S**: Start
- **E**: End
- **X**: Obstacle

### Paths in Grid with Obstacles

1. **Path: DDRR**
   
   ```
   S . . 
   D . . 
   D R R 
   ```

2. **Path: RRDD**
   
   ```
   S R R 
   . . D 
   . . D 
   ```

   

This README provides a structured overview of various pathfinding scenarios in a 3x3 grid, demonstrating different paths, handling of obstacles, and movement directions using markdown tables for clarity. Each section is designed to clearly illustrate and explain different scenarios encountered in maze navigation.
