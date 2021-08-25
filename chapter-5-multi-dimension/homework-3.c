#include <stdio.h>


int main() {
    // declare 3x3
    int dice[3][3] = {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
    };
    // declare page
    int page = 0;
    printf("dice face: ");
    // get page from user
    scanf("%d", &page);
    // relation of dice / page
    if (page % 2 != 0) {
        dice[1][1] = 1;
    }
    if (page > 1) {
        dice[0][0] = 1;
        dice[2][2] = 1;
    }
    if (page >= 4) {
        dice[0][2] = 1;
        dice[2][0] = 1;
    }
    if (page == 6) {
        dice[1][0] = 1;
        dice[1][2] = 1;
    }
    printf("= = =\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            if (dice[i][j] == 1) {
                printf(" *");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
    printf("= = =\n");

    return 0;
}