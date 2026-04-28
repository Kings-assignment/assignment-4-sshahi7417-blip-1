// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.

#include <stdio.h>

typedef struct {
    char title[100];
    char author[50];
    float price;
} Book;

int main() {
    int n;
    float threshold;
    printf("Enter number of books: ");
    scanf("%d", &n);
    Book books[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("Enter price threshold: ");
    scanf("%f", &threshold);
    printf("\n--- Books above %.2f ---\n", threshold);
    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n",
                   books[i].title, books[i].author, books[i].price);
        }
    }
    return 0;
}