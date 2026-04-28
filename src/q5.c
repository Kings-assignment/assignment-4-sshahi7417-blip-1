// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char temp[1000];
    printf("Enter a string: ");
    scanf("%s", temp);
    int size = strlen(temp) + 1;
    char *str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(str, temp);
    int len = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    printf("Length of the string: %d\n", len);
    free(str);
    return 0;
}