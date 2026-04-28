// Write a C program that counts the number of characters, words, and lines in a text file.


#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    fclose(fp);
    return 0;
}