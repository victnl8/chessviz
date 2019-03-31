#include "board.h"

void Move(char A[8][8])
{
    char hod1[6], hod2[6];
    int pos1, pos2, m1, m2, i;
    for (i = 0; i < 5; i++) {
        scanf("%c", hod1[i]);
    }
    for (i = 0; i < 5; i++) {
        scanf("%c", hod2[i]);
    }
    pos1 = hod1[0] - 97;
    pos2 = hod1[3] - 97;
    m1 = hod1[1] - 49;
    m2 = hod1[4] - 49;
    if ((m1 < 0) or (m1 > 7) or (m2 < 0) or (m2 > 7) or (pos1 < 0) or (pos1 > 7)
        or (pos2 < 0) or (pos2 > 7)) {
        printf("Error! Going beyond the chessboard!\n");
        exit(1);
    }
    A[m2][pos2] = A[m1][pos1];
    A[m1][pos1] = 32;
    draw(A);
    printf("\n");
    pos1 = hod2[0] - 97;
    pos2 = hod2[3] - 97;
    m1 = hod2[1] - 49;
    m2 = hod2[4] - 49;
    if ((m1 < 0) or (m1 > 7) or (m2 < 0) or (m2 > 7) or (pos1 < 0) or (pos1 > 7)
        or (pos2 < 0) or (pos2 > 7)) {
        printf("Error! Going beyond the chessboard!\n");
        exit(1);
    }
    A[m2][pos2] = A[m1][pos1];
    A[m1][pos1] = 32;
    draw(A);
}
