#include <stdio.h>
// calculate matrix det

int main() {
    // declare array 3x3
    int A[3][3];
    // loop 3 row
    for (int i = 0; i < 3; i++) {
        printf("Enter element on row [%d]:", i);
        // get input to col 0,1,2
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
    }
    // calculate from formula
    int detA = (A[0][0] * A[1][1] * A[2][2]) +
               (A[0][1] * A[1][2] * A[2][0]) +
               (A[0][2] * A[1][0] * A[2][1])
               - (A[2][0] * A[1][1] * A[0][2])
               - (A[2][1] * A[1][2] * A[0][0])
               - (A[2][2] * A[1][0] * A[0][1]);
    printf("\nDetA = %d\n", detA);
    return 0;
}