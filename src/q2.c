// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>
#include <string.h>

void reverseArray(char *arr, int n) {
    char *start = arr;
    char *end = arr + n - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char arr[100];
    printf("Enter a string: ");
    scanf("%s", arr);
    int n = strlen(arr);
    reverseArray(arr, n);
    printf("Reversed: %s\n", arr);
    return 0;
}