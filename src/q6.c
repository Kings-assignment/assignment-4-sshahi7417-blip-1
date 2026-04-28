// Write a C program that defines a structure called Student with members: name, roll number, 
// and marks. Prompt the user to enter data for one student and display the information.

#include <stdio.h>

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

int main() {
    Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}