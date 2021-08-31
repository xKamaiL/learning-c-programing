#include <stdio.h>

#define SIZE 7

int main(void) {
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int b[SIZE] = {};
    int *ptr_a = &a[0];
    int *ptr_b = &b[0];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("a[%d] = %d\t", i, a[i]);
        printf("b[%d] = %d\n", i, b[i]);
        *(ptr_b++) = *(ptr_a++);
    }

    printf("=====\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("a[%d] = %d\t", i, a[i]);
        printf("b[%d] = %d\n", i, b[i]);
    }
    return 1;
}
