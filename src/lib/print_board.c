#include <stdio.h>
#include <stdlib.h>

#define Height 8
#define Widths 8

void Print_board(char a[Height][Widths], int hod)
{
    int num = 1;
    if (hod != 0)
        printf(" %d. \n", hod);
    for (int y = 0; y < Height; y++) {
        printf("%d", num);
        for (int x = 0; x < Widths; x++) {
            printf(" %c", a[y][x]);
        }
        num++;
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}
