#include <stdio.h>
// calculate matrix det

int main() {
    int A[3][3];
    for (int i = 0; i < 3; i++) {
        printf("Enter element on row [%d]:", i);
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    return 0;
}