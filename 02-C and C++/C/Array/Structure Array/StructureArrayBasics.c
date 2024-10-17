#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare an array of structures
    struct Person people[3];

    // Assign values to the elements of the array
    strcpy(people[0].name, "Alice");
    people[0].age = 25;

    strcpy(people[1].name, "Bob");
    people[1].age = 30;

    strcpy(people[2].name, "Charlie");
    people[2].age = 35;

    // Access and print the values of elements in the array
    printf("Person 1:\n");
    printf("Name: %s\n", people[0].name);
    printf("Age: %d\n\n", people[0].age);

    printf("Person 2:\n");
    printf("Name: %s\n", people[1].name);
    printf("Age: %d\n\n", people[1].age);

    printf("Person 3:\n");
    printf("Name: %s\n", people[2].name);
    printf("Age: %d\n\n", people[2].age);

    return 0;
}
