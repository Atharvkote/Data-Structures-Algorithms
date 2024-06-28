## Visualization and Explanation:

#### Problem Description:
- You have a boolean matrix (`board`) representing a maze where `true` denotes a valid path, and `false` denotes an obstacle.
- The task is to find and print all possible paths from the top-left corner to the bottom-right corner of the matrix.

#### Approach:
1. **Recursive Backtracking:**
   - The program utilizes two recursive methods:
     - **`allPathPrint`**: Prints all paths and visualizes the path steps using a `path` matrix.
     - **`allPath`**: Prints paths without visualizing each step explicitly.

2. **Key Components:**
   - **Base Cases:**
     - If `(r, c)` reaches the bottom-right corner of the matrix, print the path found so far.
     - If `(r, c)` goes out of bounds or encounters an obstacle (`false` in `board[r][c]`), terminate that path exploration.

   - **Recursive Exploration:**
     - Attempt to move in all possible directions: down (`'D'`), right (`'R'`), up (`'U'`), and left (`'L'`).
     - Mark the current cell as visited (`board[r][c] = false`).
     - Recursively explore each valid move, appending the direction (`'D', 'R', 'U', 'L'`) to the current path string (`p`).

   - **Backtracking:**
     - After exploring from a cell, revert the board back to its original state (`board[r][c] = true`).

3. **Output Visualization:**
   - **`allPathPrint` Function:**
     - It prints the current `path` matrix after reaching the destination to visualize the steps taken for each path.
     - Prints the final path string (`p`) which shows the sequence of movements ('D', 'R', 'U', 'L').

#### Example Output:
- Each path found is printed along with a visual representation of the steps taken in the matrix.

#### Summary:
- The program effectively utilizes recursive backtracking to explore all possible paths through the maze, ensuring all valid paths from the start to the end are identified and printed. This approach is fundamental in scenarios requiring exhaustive pathfinding in grid-based environments.

This explanation helps in understanding how the `AllPaths` program systematically explores and prints all possible paths in a structured manner.


### Output Prints and Explanations:

1. **Path 1:**
   ```
   [1, 0, 0]
   [2, 0, 0]
   [3, 4, 5]
   DDRR
   ```
   - **Visualization:** The `path` matrix shows the sequence of steps (`1`, `2`, `3`, `4`, `5`) corresponding to the path `DDRR` (Down, Down, Right, Right).

2. **Path 2:**
   ```
   [1, 0, 0]
   [2, 5, 6]
   [3, 4, 7]
   DDRURD
   ```
   - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`, `6`, `7`) for the path `DDRURD` (Down, Down, Right, Up, Right, Down).

3. **Path 3:**
   ```
   [1, 6, 7]
   [2, 5, 8]
   [3, 4, 9]
   DDRUURDD
   ```
   - **Visualization:** The `path` matrix shows the steps (`1` through `9`) for the path `DDRUURDD` (Down, Down, Right, Up, Up, Right, Down, Down).

4. **Path 4:**
   ```
   [1, 0, 0]
   [2, 3, 0]
   [0, 4, 5]
   DRDR
   ```
   - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`) for the path `DRDR` (Down, Right, Down, Right).

5. **Path 5:**
   ```
   [1, 0, 0]
   [2, 3, 4]
   [0, 0, 5]
   DRRD
   ```
   - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`) for the path `DRRD` (Down, Right, Right, Down).

6. **Path 6:**
   ```
   [1, 4, 5]
   [2, 3, 6]
   [0, 0, 7]
   DRURDD
   ```
   - **Visualization:** The `path` matrix shows the steps (`1` through `7`) for the path `DRURDD` (Down, Right, Up, Right, Down, Down).

7. **Path 7:**
   ```
   [1, 2, 0]
   [0, 3, 0]
   [0, 4, 5]
   RDDR
   ```
   - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`) for the path `RDDR` (Right, Down, Down, Right).

8. **Path 8:**
   ```
   [1, 2, 0]
   [0, 3, 4]
   [0, 0, 5]
   RDRD
   ```
   - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`) for the path `RDRD` (Right, Down, Right, Down).

9. **Path 9:**
   ```
   [1, 2, 0]
   [4, 3, 0]
   [5, 6, 7]
   RDLDRR
   ```
   - **Visualization:** The `path` matrix shows the steps (`1` through `7`) for the path `RDLDRR` (Right, Down, Left, Down, Right, Right).

10. **Path 10:**
    ```
    [1, 2, 3]
    [0, 0, 4]
    [0, 0, 5]
    RRDD
    ```
    - **Visualization:** The `path` matrix shows the steps (`1`, `2`, `3`, `4`, `5`) for the path `RRDD` (Right, Right, Down, Down).

11. **Path 11:**
    ```
    [1, 2, 3]
    [0, 5, 4]
    [0, 6, 7]
    RRDLDR
    ```
    - **Visualization:** The `path` matrix shows the steps (`1` through `7`) for the path `RRDLDR` (Right, Right, Down, Left, Down, Right).

12. **Path 12:**
    ```
    [1, 2, 3]
    [6, 5, 4]
    [7, 8, 9]
    RRDLLDRR
    ```
    - **Visualization:** The `path` matrix shows the steps (`1` through `9`) for the path `RRDLLDRR` (Right, Right, Down, Left, Left, Down, Right, Right).

Each printout corresponds to a unique path found through the maze, along with a visual representation of the steps taken in the `path` matrix. These outputs demonstrate how the recursive backtracking approach systematically explores and prints all possible paths from the start to the end of the maze.
