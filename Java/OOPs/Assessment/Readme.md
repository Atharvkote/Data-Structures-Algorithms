
# Rock-Paper-Scissors Game

## Description
This is a simple console-based Rock-Paper-Scissors game implemented in Java. The user plays against the computer, and the result of each round is displayed on the console.

## How to Play
1. Run the program.
2. When prompted, enter:
   - `0` for Rock
   - `1` for Paper
   - `2` for Scissors
3. The computer will randomly choose between Rock, Paper, and Scissors.
4. The program will display the computer's choice and the result of the game (Win, Lose, or Draw).

## Rules
- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- If both the user and the computer choose the same option, the game is a draw.

## Code
Source code Available in the Above file :
```java
RPSGameUsingOOPs.java
```

## Requirements
- Java Development Kit (JDK) 8 or higher

## Setup
1. Clone the repository or download the code.
2. Compile the Java file:
   ```sh
   javac cwh_41_ex2sol.java
   ```
3. Run the compiled Java program:
   ```sh
   java cwh_41_ex2sol
   ```

## Example Test Cases

### Test Case 1
**Input:** 
```
Enter 0 for Rock, 1 for Paper, 2 for Scissor: 0
```
**Possible Output:**
```
Computer choice: Rock
Draw
```
or
```
Computer choice: Paper
Computer Wins!
```
or
```
Computer choice: Scissors
You Win!
```

### Test Case 2
**Input:** 
```
Enter 0 for Rock, 1 for Paper, 2 for Scissor: 1
```
**Possible Output:**
```
Computer choice: Rock
You Win!
```
or
```
Computer choice: Paper
Draw
```
or
```
Computer choice: Scissors
Computer Wins!
```

### Test Case 3
**Input:** 
```
Enter 0 for Rock, 1 for Paper, 2 for Scissor: 2
```
**Possible Output:**
```
Computer choice: Rock
Computer Wins!
```
or
```
Computer choice: Paper
You Win!
```
or
```
Computer choice: Scissors
Draw
```
