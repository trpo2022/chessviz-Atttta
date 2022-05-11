#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Height 8
#define Widths 8

void write_read(int* x, int* y, int* xx, int* yy, int* ex, int* mode)
{
    int second = 0;
    char input[20];
    *mode = 0;
    fflush(stdin);
    printf("\n Write - ");
    // scanf("%c",input);
    fgets(input, 20, stdin);
    input[strlen(input) - 1] = '\0';
    for (int symbol = 0; symbol < strlen(input); symbol++) {
        // printf("%d ",symbol);
        if (strlen(input) < 5 && input[0] != '#') {
            printf(" Error write. \n");
            break;
        } else if (input[0] == '#') {
            *ex = 666;
            break;
        }
        if (input[symbol] == '-') {
            second = 1;
            *mode = 1;
        }
        if (input[symbol] == 'x') {
            second = 1;
            *mode = 2;
        }
        if (input[symbol] == '#')
            *ex += 2;
        if (input[symbol] == 'a' && second == 0)
            *x = 0;
        else if (input[symbol] == 'b' && second == 0)
            *x = 1;
        else if (input[symbol] == 'c' && second == 0)
            *x = 2;
        else if (input[symbol] == 'd' && second == 0)
            *x = 3;
        else if (input[symbol] == 'e' && second == 0)
            *x = 4;
        else if (input[symbol] == 'f' && second == 0)
            *x = 5;
        else if (input[symbol] == 'g' && second == 0)
            *x = 6;
        else if (input[symbol] == 'h' && second == 0)
            *x = 7;
        else if (input[symbol] == '1' && second == 0)
            *y = 0;
        else if (input[symbol] == '2' && second == 0)
            *y = 1;
        else if (input[symbol] == '3' && second == 0)
            *y = 2;
        else if (input[symbol] == '4' && second == 0)
            *y = 3;
        else if (input[symbol] == '5' && second == 0)
            *y = 4;
        else if (input[symbol] == '6' && second == 0)
            *y = 5;
        else if (input[symbol] == '7' && second == 0)
            *y = 6;
        else if (input[symbol] == '8' && second == 0)
            *y = 7;

        if (input[symbol] == 'a' && second == 1)
            *xx = 0;
        else if (input[symbol] == 'b' && second == 1)
            *xx = 1;
        else if (input[symbol] == 'c' && second == 1)
            *xx = 2;
        else if (input[symbol] == 'd' && second == 1)
            *xx = 3;
        else if (input[symbol] == 'e' && second == 1)
            *xx = 4;
        else if (input[symbol] == 'f' && second == 1)
            *xx = 5;
        else if (input[symbol] == 'g' && second == 1)
            *xx = 6;
        else if (input[symbol] == 'h' && second == 1)
            *xx = 7;
        else if (input[symbol] == '1' && second == 1) {
            *yy = 0;
        } else if (input[symbol] == '2' && second == 1) {
            *yy = 1;
        } else if (input[symbol] == '3' && second == 1) {
            *yy = 2;
        } else if (input[symbol] == '4' && second == 1) {
            *yy = 3;
        } else if (input[symbol] == '5' && second == 1) {
            *yy = 4;
        } else if (input[symbol] == '6' && second == 1) {
            *yy = 5;
        } else if (input[symbol] == '7' && second == 1) {
            *yy = 6;
        } else if (input[symbol] == '8' && second == 1) {
            *yy = 7;
        }
    }
}
