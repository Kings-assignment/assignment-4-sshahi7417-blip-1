// Write a C program to create a file and write a user-entered string into it. Then display a 
// message confirming that the file has been written successfully.

#include <stdio.h>

int main() {
    char filename[100];
    char content[500];
    FILE *fp;
    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the string to write: ");
    scanf(" %[^\n]", content);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(fp, "%s", content);
    printf("File written successfully.\n");
    fclose(fp);
    return 0;
}