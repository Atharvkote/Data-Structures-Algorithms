<img src="../../Essentials/Recursion.png" height=200 width=400 alt="logo">

## What is Recursion? 

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.
<br/><br/>
<img src="../../Essentials/Recurrflow.png" height=200 width=400 alt="logo">

## Basic Recursion Codes for Understanding Purpose 

### 1.
```java
    public static void printDec(int n) {
        if(n == 1) {
            System.out.println(n);
            return;
        }
        System.out.print(n+" ");
        printDec(n-1);
    }
```
### 2.
```java
    public static void printInc(int n) {
        if(n == 1) {
            System.out.print(n+" ");
            return;
        }
        printInc(n-1);
        System.out.print(n+" ");
    }
 ```
### Factorial
```java
    public static int fact(int n) {
        if(n == 0) {
            return 1;
        }
        int fnm1 = fact(n-1);
        int fn = n * fact(n-1);
        return fn;
    }
```
### Sum Till 'n'
```java
    public static int calcSum(int n) {
        if(n == 1) {
            return 1;
        }
        int Snm1 = calcSum(n-1);
        int Sn = n + Snm1;
        return Sn;
    }

    //calculate nth term in fibonacci
    public static int fib(int n) {
        if(n == 0 || n == 1) {
            return n;
        }
        int fnm1 = fib(n-1); 
        int fnm2 = fib(n-2); 
        int fn = fnm1 + fnm2;
        return fn;
    }
```
### Checking Sorted or not
 ```java
    public static boolean isSorted(int arr[], int i) {
        if(i == arr.length-1) {
            return true;
        }

        if(arr[i] > arr[i+1]) {
            return false;
        }

        return isSorted(arr, i+1);
    }
```
### First Occurance of Element
```java
    public static int firstOccurence(int arr[], int key, int i) {
        if(i == arr.length) {
            return -1;
        }
        if(arr[i] == key) {
            return i;
        }

        return firstOccurence(arr, key, i+1);
    }
```
### Last Occurance of a Element 
```java
    public static int lastOccurence(int arr[], int key, int i) {
        if(i == arr.length) {
            return -1;
        }
        int isFound = lastOccurence(arr, key, i+1);
        if(isFound == -1 && arr[i] == key) {
            return i;
        }

        return isFound;
    }
```
### Exponentiation
```java
    public static int power(int x, int n) {
        if(n == 0) {
            return 1;
        }
        // int xnm1 = power(x, n-1);
        // int xn = x * xnm1;
        // return xn;

        return x * power(x, n-1);
    }
```
### Exponentiation( Optimized )
```java
    public static int optimizedPower(int x, int n) {
        if(n == 0) {
            return 1;
        }
        
        if(n % 2 == 0) { //even
            return optimizedPower(x, n/2) * optimizedPower(x, n/2);
        } else { //odd
            return x * optimizedPower(x, n/2) * optimizedPower(x, n/2);
        }
    }
```
### Tiling Problem ( Intermediate )
```java
    public static int tilingProblem(int n) { // 2 x n (floor size)
        //base case
        if(n == 0 || n == 1) {
            return 1;
        }

        //kaam
        //vertical choice
        int fnm1 = tilingProblem(n-1);

        //horizontal choice
        int fnm2 = tilingProblem(n-2);

        int totWays = fnm1 + fnm2;
        return totWays;
    }
```
### Removing Duplicates 
```java
    public static void removeDuplicates(String str, int idx, StringBuilder newStr, boolean map[]) {
        if(idx == str.length()) {
            System.out.println(newStr);
            return;
        }

        //kaam
        char currChar = str.charAt(idx);
        if(map[currChar-'a'] == true) {
            //duplicate
            removeDuplicates(str, idx+1, newStr, map);
        } else {
            map[currChar-'a'] = true;
            removeDuplicates(str, idx+1, newStr.append(currChar), map);
        }
    }
```
### Pairing
```java
    public static int friendsPairing(int n) {
        if(n == 1 || n == 2) {
            return n;
        }

        return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
    }
 ```
### Bin String ( Hard )
```java
    public static void printBinStrings(int n, int lastPlace, String str) {
        //base case
        if(n == 0) {
            System.out.println(str);
            return;
        }

        //kaam
        printBinStrings(n-1, 0, str+"0");

        if(lastPlace == 0) {
            printBinStrings(n-1, 1, str+"1");
        }
    }
    public static void main(String args[]) {
        printBinStrings(3, 0, "");
    }
}
```
