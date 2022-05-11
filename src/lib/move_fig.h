#pragma once

#include <stdio.h>
#include <stdlib.h>

#define Height 8
#define Widths 8

void move_fig(
        char board[Height][Widths],
        int* mode,
        int x,
        int y,
        int xx,
        int yy,
        int* end);
