#include "stdio.h"

int main() {
    char word[] = "";
    printf("Enter a word: ");
    scanf("%s", word);
    char *end = word;
    while (*end != '\0') {
        end++;
    }
    printf("Reverse word: ");
    while (end >= &word[0]) {
        printf("%c", *end);
        end--;
    }
    printf("\n");

    return 1;
}