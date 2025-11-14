#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int rollNo;
    char name[50];
    float percentage;
};

void addStudent(struct Student students[], int *n);
void displayStudents(struct Student students[], int n);
void sortByPercentage(struct Student students[], int n);
void searchByRollNo(struct Student students[], int n, int rollNo);

int main() {
    struct Student students[MAX];
    int n = 0, choice, rollNo;

    do {
        printf("\n========== STUDENT DIRECTORY ==========\n");
        printf("1. Add New Student\n");
        printf("2. Sort Students by Percentage\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &n);
                break;
            case 2:
                if (n == 0) { 
                    printf("\nNo student data to sort.\n");
                    } 
                    else { 
                        sortByPercentage(students, n);
                        printf("\nData sorted successfully by Percentage (Descending)!\n");
                        displayStudents(students, n);
                        }                
                        break;
            case 3:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &rollNo);
                searchByRollNo(students, n, rollNo);
                break;
            case 4:
                displayStudents(students, n);
                break;
            case 5:
                printf("\nExiting program... Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
void addStudent(struct Student students[], int *n) {
    if (*n >= MAX) {
        printf("\nDirectory is full! Cannot add more students.\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*n].rollNo);
    printf("Enter Name: ");
    getchar();
    fgets(students[*n].name, sizeof(students[*n].name), stdin);
    students[*n].name[strcspn(students[*n].name, "\n")] = '\0'; 
    printf("Enter Percentage: ");
    scanf("%f", &students[*n].percentage);

    (*n)++;
    printf("\nStudent added successfully!\n");
}

void displayStudents(struct Student students[], int n) {
    if (n == 0) {
        printf("\nNo student data available.\n");
        return;
    }

    printf("\n%-10s %-25s %-10s\n", "Roll No", "Name", "Percentage");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-25s %-10.2f\n", students[i].rollNo, students[i].name, students[i].percentage);
    }
}

void sortByPercentage(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].percentage < students[j].percentage) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void searchByRollNo(struct Student students[], int n, int rollNo) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            printf("\nStudent Found!\n");
            printf("Roll No: %d\nName: %s\nPercentage: %.2f\n", 
                    students[i].rollNo, students[i].name, students[i].percentage);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nNo student found with Roll No %d.\n", rollNo);
    }
}
