// Write a C program to read the contents of a text file and display them on the screen.

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    printf("\n--- File Contents ---\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}