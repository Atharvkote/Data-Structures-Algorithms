#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 10

typedef struct Student {
    char name[MAX_NAME_LENGTH];
    int rollno;
} Student;

Student *students = NULL;
int student_count = 0;

// Function prototypes
void load_data();
void save_data();
void insert_student();
void delete_student();
void update_student();
void display_students();
void search_student();
void sort_students();

int main() {
    int choice;

    load_data();

    do {
        printf("\nOperation Menu:\n");
        printf("1. Insert Student\n");
        printf("2. Delete Student\n");
        printf("3. Update Student\n");
        printf("4. Display Students\n");
        printf("5. Search Student\n");
        printf("6. Sort Students\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                insert_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                update_student();
                break;
            case 4:
                display_students();
                break;
            case 5:
                search_student();
                break;
            case 6:
                sort_students();
                break;
            case 7:
                save_data();
                free(students);
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 7);

    return 0;
}

void load_data() {
    FILE *file = fopen("students.dat", "r");
    if (!file) return;

    fscanf(file, "%d", &student_count);
    students = (Student*)malloc(student_count * sizeof(Student));
    for (int i = 0; i < student_count; i++) {
        fgets(students[i].name, MAX_NAME_LENGTH, file);
        strtok(students[i].name, "\n"); // Remove the newline character
        fscanf(file, "%d", &students[i].rollno);
        fgetc(file); // Consume the newline after the roll number
    }
    fclose(file);
}

void save_data() {
    FILE *file = fopen("students.dat", "w");
    if (!file) return;

    fprintf(file, "%d\n", student_count);
    for (int i = 0; i < student_count; i++) {
        fprintf(file, "%s\n", students[i].name);
        fprintf(file, "%d\n", students[i].rollno);
    }
    fclose(file);
}

void insert_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Data limit reached. Cannot add more students.\n");
        return;
    }

    Student new_student;
    printf("Enter Student Name: ");
    fgets(new_student.name, MAX_NAME_LENGTH, stdin);
    strtok(new_student.name, "\n"); // Remove newline character from fgets
    printf("Enter Roll Number: ");
    scanf("%d", &new_student.rollno);
    getchar(); // Consume the newline character left by scanf

    students = (Student*)realloc(students, (student_count + 1) * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    students[student_count] = new_student;
    student_count++;
    printf("Student Added!\n");
}

void delete_student() {
    int rollno;
    printf("Enter Roll Number to Delete: ");
    scanf("%d", &rollno);
    getchar(); // Consume the newline character left by scanf

    int index = -1;
    for (int i = 0; i < student_count; i++) {
        if (students[i].rollno == rollno) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Student Not Found!\n");
        return;
    }

    for (int i = index; i < student_count - 1; i++) {
        students[i] = students[i + 1];
    }
    student_count--;
    students = (Student*)realloc(students, student_count * sizeof(Student));
    if (students == NULL && student_count > 0) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Student Deleted!\n");
}

void update_student() {
    int rollno;
    printf("Enter Roll Number to Update: ");
    scanf("%d", &rollno);
    getchar(); // Consume the newline character left by scanf

    for (int i = 0; i < student_count; i++) {
        if (students[i].rollno == rollno) {
            printf("Enter New Name: ");
            fgets(students[i].name, MAX_NAME_LENGTH, stdin);
            strtok(students[i].name, "\n"); // Remove newline character from fgets
            printf("Enter New Roll Number: ");
            scanf("%d", &students[i].rollno);
            getchar(); // Consume the newline character left by scanf
            printf("Student Updated!\n");
            return;
        }
    }
    printf("Student Not Found!\n");
}

void display_students() {
    if (student_count == 0) {
        printf("No records to display.\n");
        return;
    }

    printf("\n%-20s | %-10s\n", "Name", "Roll Number");
    printf("------------------------------\n");

    for (int i = 0; i < student_count; i++) {
        printf("%-20s | %-10d\n", students[i].name, students[i].rollno);
    }
}

void search_student() {
    int rollno;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &rollno);
    getchar(); // Consume the newline character left by scanf

    for (int i = 0; i < student_count; i++) {
        if (students[i].rollno == rollno) {
            printf("Student Found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].rollno);
            return;
        }
    }
    printf("Student Not Found!\n");
}

void sort_students() {
    for (int i = 0; i < student_count - 1; i++) {
        for (int j = i + 1; j < student_count; j++) {
            if (students[i].rollno > students[j].rollno) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Students Sorted by Roll Number!\n");
}
