#include <stdio.h>
#include <stdlib.h>

#include <lib/move_fig.h>
#include <lib/print_board.h>
#include <lib/start_position.h>
#include <lib/write_read.h>

#define Height 8
#define Widths 8

int main()
{
    int hod = 1, step = 0;
    char board[Height][Widths];
    Start_position(board);
    Print_board(board, 0);
    int x = 0, y = 0, x1 = 0, y1 = 0, end = 0, mode = 0, player_turn = 0;
    while (end == 0) {
        write_read(&x, &y, &x1, &y1, &end, &mode);
        if ((board[y][x] == 'r' || board[y][x] == 'n' || board[y][x] == 'b'
             || board[y][x] == 'q' || board[y][x] == 'k' || board[y][x] == 'p')
            && (player_turn == 0 || player_turn == 2))
            player_turn = 1;
        else if (
                (board[y][x] == 'R' || board[y][x] == 'N' || board[y][x] == 'B'
                 || board[y][x] == 'Q' || board[y][x] == 'K'
                 || board[y][x] == 'P')
                && (player_turn == 0 || player_turn == 1))
            player_turn = 2;
        else {
            printf("\n Broken sequence moves. \n");
            end += 2;
        }
        move_fig(board, &mode, x, y, x1, y1, &end);
        Print_board(board, hod);
        step += 1;
        if (step == 2) {
            hod += 1;
            step = 0;
        }
    }
    return 0;
}
