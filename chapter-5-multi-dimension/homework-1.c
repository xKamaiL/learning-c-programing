#include <stdio.h>


int main() {
    int data[4][4] = {
            {21, 20, 45, 35},
            {51, 34, 27, 78},
            {12, 54, 77, 13},
            {65, 53, 22, 26},
    };

    printf("Enter a value to find: ");
    int find;
    scanf("%d", &find);
    int indexRow = -1, indexCol = -1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (data[i][j] == find) {
                indexRow = i;
                indexCol = j;
                break;
            }
        }
    }
    if (indexRow == -1 || indexCol == -1) {
        printf("%d is not found.\n", find);
        return 0;
    }
    printf("%d is found at row %d, column %d\n", find, indexRow, indexCol);
    return 0;
}