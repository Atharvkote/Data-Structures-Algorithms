# Basic Type of Functions/Method in C
1. **Function Declaration and Definition**
```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result = add(3, 4);
    printf("The result of addition is %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

2. **Function with No Return Type and No Parameters**
```c
#include <stdio.h>

void greet() {
    printf("Hello, there!\n");
}

int main() {
    greet();
    return 0;
}
```

3. **Function with Default Parameter Values (in C99 and later)**
```c
#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    printf("2^3 = %d\n", power(2, 3));
    printf("2^2 = %d\n", power(2, 2));
    return 0;
}
```

4. **Recursion**
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    printf("Factorial of 5 is %d\n", factorial(5));
    return 0;
}
```

5. **Passing Arrays to Functions**
```c
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
```

6. **Returning Multiple Values**
```c
#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a - b;
}

int main() {
    int sum, diff;
    calculate(5, 3, &sum, &diff);
    printf("Sum: %d, Difference: %d\n", sum, diff);
    return 0;
}
```
