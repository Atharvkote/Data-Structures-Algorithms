#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare an array of structures
    struct Person people[3] = {
        {"Alice", 25, 5.6},
        {"Bob", 30, 6.0},
        {"Charlie", 35, 5.8}
    };

    // Traverse the array of structures
    printf("People Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f\n", people[i].height);
        printf("\n");
    }

    return 0;
}
