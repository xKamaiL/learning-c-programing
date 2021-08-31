#include "stdio.h"


int main() {
    int size;
    printf("Enter a size of array : ");
    scanf("%d", &size);
    int element[size];
    int *p = element;
    for (int i = 0; i < size; i++) {
        printf("Enter elements [%d]: ", i);
        scanf("%d", p + i);
    }

    // do bubble sort (ASC)
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + j) < *(p + i)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("Ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // do bubble sort (DESC)
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + j) > *(p + i)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf("Descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 1;
}