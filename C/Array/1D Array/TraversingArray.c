#include <stdio.h>

int main() {
    // Declaring an array of integers with size 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // Traversing the array using a for loop
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return 0;
}
//Output :
10
20
30
40
50
