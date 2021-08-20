#include <stdio.h>

#define ROW 9
#define COL 9

int main(void) {
    int draw[ROW][COL] = {{0, 0, 1, 1, 0, 1, 1, 0, 0},
                          {0, 1, 0, 0, 1, 0, 0, 1, 0},
                          {1, 0, 0, 0, 0, 0, 0, 0, 1},
                          {1, 0, 0, 0, 0, 0, 0, 0, 1},
                          {0, 1, 0, 0, 0, 0, 0, 1, 0},
                          {0, 0, 1, 0, 0, 0, 1, 0, 0},
                          {0, 0, 0, 1, 0, 1, 0, 0, 0},
                          {0, 0, 0, 0, 1, 0, 0, 0, 0}};
    // transpose
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            int temp = draw[i][j];
            draw[i][j] = draw[j][i];
            draw[j][i] = temp;
        }
    }
    //
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
                printf(" \u2593");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}