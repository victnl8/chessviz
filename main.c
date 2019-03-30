
#include <stdio.h>
#include <stdlib.h>
void draw(char A[8][8])
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
int main()
{
    char A[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};
    draw(A);
    return 0;
}