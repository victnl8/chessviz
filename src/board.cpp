#include "board.h"

void Move(char A[8][8])
{
    char hod1[7], hod2[7];
    int pos1, pos2, m1, m2, i;
    for (i = 0; i < 6; i++) {
        cin >> hod1[i];
    }
    if (hod1[0] == 'E') {
        exit(1);
    }
    for (i = 0; i < 6; i++) {
        cin >> hod2[i];
    }
    pos1 = hod1[1] - 97;
    pos2 = hod1[4] - 97;
    m1 = hod1[2] - 49;
    m2 = hod1[5] - 49;
    if ((m1 < 0) or (m1 > 7) or (m2 < 0) or (m2 > 7) or (pos1 < 0) or (pos1 > 7)
        or (pos2 < 0) or (pos2 > 7)) {
        printf("Error! Going beyond the chessboard!\n");
        exit(1);
    }
    A[m2][pos2] = A[m1][pos1];
    A[m1][pos1] = 32;
    for (i = 0; i < 6; i++) {
        cout << hod1[i];
    }
    cout << endl;
    Board(A);
    printf("\n");
    pos1 = hod2[1] - 97;
    pos2 = hod2[4] - 97;
    m1 = hod2[2] - 49;
    m2 = hod2[5] - 49;
    if ((m1 < 0) or (m1 > 7) or (m2 < 0) or (m2 > 7) or (pos1 < 0) or (pos1 > 7)
        or (pos2 < 0) or (pos2 > 7)) {
        printf("Error! Going beyond the chessboard!\n");
        exit(1);
    }
    A[m2][pos2] = A[m1][pos1];
    A[m1][pos1] = 32;
    for (i = 0; i < 6; i++) {
        cout << hod2[i];
    }
    cout << endl;
    Board(A);
    cout << endl;
}
