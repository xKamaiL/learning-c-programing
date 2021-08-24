#include <stdio.h>

int main() {
    int data[4][4] = {
            {21, 20, 45, 35},
            {51, 34, 27, 78},
            {12, 54, 77, 13},
            {65, 53, 22, 26},
    };

    printf("Enter a value to find: ");
    // declare input value as a int
    int find;
    // get input from user
    scanf("%d", &find);
    // set index of row , col to -1
    // which mean not found
    int indexRow = -1, indexCol = -1;
    // loop row
    for (int i = 0; i < 4; i++) {
        // lop col
        for (int j = 0; j < 4; j++) {
            // if  value equal to find
            if (data[i][j] == find) {
                // set index row to current i
                indexRow = i;
                // set index col to current j
                indexCol = j;
                break;
            }
        }
    }
    // index be -1 means not found
    if (indexRow == -1 || indexCol == -1) {
        printf("%d is not found.\n", find);
        return 0;
    }
    // found show the index (col,row)
    printf("%d is found at row %d, column %d\n", find, indexRow, indexCol);
    return 0;
}