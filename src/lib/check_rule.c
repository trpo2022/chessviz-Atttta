#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define Height 8
#define Weight 8

int check_rule(int x, int y, int xx, int yy, char figure, char enemy, int mode)
{
    int type_figure = 0, type_enemy = 0;

    if (figure == ' ') {
        printf("\n \n Empety figure. \n \n");
        return 4;
    }

    if (figure == 'r' || figure == 'n' || figure == 'b' || figure == 'q'
        || figure == 'k' || figure == 'p')
        type_figure = 1;
    else
        type_figure = 2;

    if (enemy == 'r' || enemy == 'n' || enemy == 'b' || enemy == 'q'
        || enemy == 'k' || enemy == 'p')
        type_enemy = 1;
    else
        type_enemy = 2;

    switch (figure) {
    case 'p':
    case 'P':
        if ((abs(yy - y) > 2 || abs(xx - x) > 0) && mode == 1) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if ((abs(xx - x) > 1 || abs(yy - y) > 1 || type_figure == type_enemy)
            && mode == 2) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if ((abs(xx - x) > 1 && (y != 6 && y != 1) && abs(yy - y) > 0)
            && mode == 1) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound.\n");
            return 4;
            break;
        }
        break;
    case 'r':
    case 'R':
        if (abs(xx - x) > 0 && abs(yy - y) > 0) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound\n");
            return 4;
            break;
        }
        if (mode == 2 && (type_figure == type_enemy)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        break;
    case 'n':
    case 'N':
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound\n");
            return 4;
            break;
        }
        if ((abs(yy - y) == 2 && abs(xx - x) == 1)
            || (abs(yy - y) == 1 && abs(xx - x) == 2)) {
        } else {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (mode == 2 && (type_figure == type_enemy)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        break;
    case 'b':
    case 'B':
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound\n");
            return 4;
            break;
        }
        if ((abs(xx - x) > 0 && abs(yy - y) == 0)
            || ((yy - y) > 0 && (xx - x) == 0)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (mode == 2 && (type_figure == type_enemy)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        break;
    case 'q':
    case 'Q':
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound\n");
            return 4;
            break;
        }
        if ((abs(xx - x) == 2 && abs(yy - y) == 1)
            || (abs(xx - x) == 1 && abs(yy - y) == 2)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (mode == 2 && (type_figure == type_enemy)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        break;
    case 'k':
    case 'K':
        if (abs(xx - x) > Height || abs(yy - y) > Weight) {
            printf("\n Error - Exceeding field bound\n");
            return 4;
            break;
        }
        if (abs(xx - x) > 1 || abs(yy - y) > 1) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        if (mode == 2 && (type_figure == type_enemy)) {
            printf("\n Error - Violation of rules\n");
            return 4;
            break;
        }
        break;
    }
    return 0;
}
