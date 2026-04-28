// Write a C program that stores student records (name, roll number, and marks) into a 
// file and then reads and displays all stored records.

#include <stdio.h>

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

int main() {
    int n;
    FILE *fp;
    printf("Enter number of students: ");
    scanf("%d", &n);
    Student s;
    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.rollNumber);
        printf("Marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(Student), 1, fp);
    }
    fclose(fp);
    printf("\nRecords saved successfully.\n");
    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    printf("\n--- Stored Student Records ---\n");
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
               s.name, s.rollNumber, s.marks);
    }
    fclose(fp);
    return 0;
}