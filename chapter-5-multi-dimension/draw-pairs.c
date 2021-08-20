
#include <stdio.h>

#define ROW 9
#define COL 9
// 4 5 5 5 6 5 5 4 5 6

int main(void) {
    // declare array 9x9
    int draw[ROW][COL] = {};
    // print enter input
    printf("Enter locations (pair of row and column): ");
    // create a empty string
    // which size row * col * 2
    char str[ROW * COL * 2] = "";
    // scan one line as a string
    // scanf will scan until new line
    scanf("%[^\n]", str);
    // loop string one by one,
    // loop str to \0
    for (int i = 0; str[i] != '\0'; i++) {

        // pass if string is space
        if (str[i] == ' ') {
            continue;
        } else {
            // parser row and col
            // by i and i + 2
            // and convert string to number
            int row = str[i] - '0';
            int col = str[i + 2] - '0';
            // set target row, col to 1
            draw[row][col] = 1;
            // skip i by 2
            i = i + 2;
        }
    }
    printf("\n");
    // print border
    printf(" #| ");
    for (int i = 0; i < COL; i++) {
        printf("%d ", i);
    }
    printf("\n--+");
    for (int i = 0; i < COL; i++) {
        printf("--");
    }
    printf("\n");
    for (int i = 0; i < ROW; i++) {
        printf(" %d|", i);
        for (int j = 0; j < COL; j++) {
            if (draw[i][j] == 1) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

