#include "board.h"
void Board(char A[8][8])
{
    int i, j;
    for (i = 7; i > -1; i--) {
        printf("%i ", i + 1);
        for (j = 0; j < 8; j++) {
            printf("%c  ", A[i][j]);
        }
        printf("\n");
    }
    printf("  a  b  c  d  e  f  g  h\n");
}
