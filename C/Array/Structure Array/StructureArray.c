#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10

struct Student {
    char name[20];
    int rollno;
} s[MAX_STUDENTS];

int main() {
    int ch, f, h, x, cha, newroll, i, vb, cv, w;
    int r, v;
    char zz[20];
    char emt[20];

    printf("Enter Number of Students\n");
    scanf("%d", &ch);
    if (ch > MAX_STUDENTS) {
        printf("Error: Number of students cannot exceed %d.\n", MAX_STUDENTS);
        return 1;
    }

    printf("Enter Data of %d Students\n", ch);
    for (i = 0; i < ch; i++) {
        printf("Enter Details of Student -%d\n", i + 1);
        printf("Enter Your Name\n");
        scanf("%s", s[i].name);
        printf("Enter Your Roll Number\n");
        scanf("%d", &s[i].rollno);
    }

    do {
        printf("\t\tOperation Menu:\n");
        printf("\t\t1. Insertion of Record\n");
        printf("\t\t2. Deletion of Record\n");
        printf("\t\t3. Updation of Record\n");
        printf("\t\t4. Display Records\n");
        printf("Enter Your Choice\n");
        scanf("%d", &f);

        switch (f) {
            case 1: // Insertion of Record
                printf("Enter Number of Students Data to be Inserted\n");
                scanf("%d", &cha);
                if (cha + ch > MAX_STUDENTS) {
                    printf("DATA LIMIT REACHED [Data Limit: %d]\n", MAX_STUDENTS);
                } else {
                    printf("Enter Data of %d Students\n", cha);
                    for (i = ch; i < cha + ch; i++) {
                        printf("Enter Details of Student -%d\n", i + 1);
                        printf("Enter Your Name\n");
                        scanf("%s", s[i].name);
                        printf("Enter Your Roll Number\n");
                        scanf("%d", &s[i].rollno);
                    }
                    ch += cha;
                    printf("Records Updated!\n");
                }
                break;

            case 2: // Deletion of Record
                r = 0;
                printf("Enter Roll Number to Delete\n");
                scanf("%d", &h);
                for (i = 0; i < ch; i++) {
                    if (h == s[i].rollno) {
                        r = 1;
                        v = i;
                        break;
                    }
                }
                if (r) {
                    for (i = v; i < ch - 1; i++) {
                        s[i] = s[i + 1];
                    }
                    ch--;
                    printf("Record Deleted!\n");
                } else {
                    printf("Invalid Roll Number\n");
                }
                break;

            case 3: // Updation of Record
                printf("\t\tUpdation Menu:\n");
                printf("\t\t1. Update Roll Number\n");
                printf("\t\t2. Update Name\n");
                printf("Enter Your Choice\n");
                scanf("%d", &x);

                switch (x) {
                    case 1: // Update Roll Number
                        r = 0;
                        printf("Enter Current Roll Number\n");
                        scanf("%d", &cv);
                        for (i = 0; i < ch; i++) {
                            if (cv == s[i].rollno) {
                                r = 1;
                                v = i;
                                break;
                            }
                        }
                        if (r) {
                            printf("Enter New Roll Number\n");
                            scanf("%d", &newroll);
                            s[v].rollno = newroll;
                            printf("Record Updated!\n");
                        } else {
                            printf("Invalid Roll Number\n");
                        }
                        break;

                    case 2: // Update Name
                        r = 0;
                        printf("Enter Current Name\n");
                        scanf("%s", emt);
                        for (i = 0; i < ch; i++) {
                            if (strcmp(emt, s[i].name) == 0) {
                                r = 1;
                                v = i;
                                break;
                            }
                        }
                        if (r) {
                            printf("Enter New Name\n");
                            scanf("%s", zz);
                            strcpy(s[v].name, zz);
                            printf("Name Updated!\n");
                        } else {
                            printf("Name Not Found\n");
                        }
                        break;

                    default:
                        printf("Invalid Choice\n");
                }
                break;

            case 4: // Display Records
                if (ch == 0) {
                    printf("No records to display.\n");
                } else {
                    for (i = 0; i < ch; i++) {
                        printf("Data of Student - %d\n", i + 1);
                        printf("\tName: %s\n", s[i].name);
                        printf("\tRoll Number: %d\n", s[i].rollno);
                    }
                }
                break;

            default:
                printf("Invalid Choice\n");
        }

        printf("\nIf you want to continue with operations [PRESS 1], otherwise [PRESS 0]\n");
        scanf("%d", &w);
    } while (w == 1);

    return 0;
}
