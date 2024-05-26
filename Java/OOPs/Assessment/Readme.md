
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
```java
package com.company;

import java.util.Random;
import java.util.Scanner;

public class cwh_41_ex2sol {
    public static void main(String[] args) {
        // 0 for Rock
        // 1 for Paper
        // 2 for Scissor

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 0 for Rock, 1 for Paper, 2 for Scissor: ");
        
        int userInput = sc.nextInt();

        if (userInput < 0 || userInput > 2) {
            System.out.println("Invalid input! Please enter 0, 1, or 2.");
            return;
        }

        Random random = new Random();
        int computerInput = random.nextInt(3);

        if (userInput == computerInput) {
            System.out.println("Draw");
        } else if (userInput == 0 && computerInput == 2 || userInput == 1 && computerInput == 0
                || userInput == 2 && computerInput == 1) {
            System.out.println("You Win!");
        } else {
            System.out.println("Computer Wins!");
        }

        String[] choices = {"Rock", "Paper", "Scissors"};
        System.out.println("Computer choice: " + choices[computerInput]);
    }
}
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
