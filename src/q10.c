// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.

#include <stdio.h>

typedef struct {
    char model[50];
    int year;
    float mileage;
} Car;

int main() {
    Car cars[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Mileage: ");
        scanf("%f", &cars[i].mileage);
    }
    int minIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (cars[i].mileage < cars[minIndex].mileage)
            minIndex = i;
    }
    printf("\n--- Car with Lowest Mileage ---\n");
    printf("Model: %s\n", cars[minIndex].model);
    printf("Year: %d\n", cars[minIndex].year);
    printf("Mileage: %.2f\n", cars[minIndex].mileage);
    return 0;
}