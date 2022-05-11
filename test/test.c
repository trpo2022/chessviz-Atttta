#include <ctest.h>
#include <stdio.h>

#include <lib/check_rule.h>
#include <lib/move_fig.h>
#include <lib/start_position.h>

CTEST(move, move_figure)
{
    char board[8][8];
    Start_position(board);
    int x = 4, y = 1, xx = 4, yy = 3, mode = 1, end = 0;
    move_fig(board, &mode, x, y, xx, yy, &end);
    int result = (int)board[yy][xx];

    const int need_result = 112;
    ASSERT_EQUAL(need_result, result);
}

CTEST(move, move_no_error)
{
    char board[8][8];
    Start_position(board);
    int x = 6, y = 1, xx = 6, yy = 3, mode = 1, end = 0;
    move_fig(board, &mode, x, y, xx, yy, &end);

    const int error = 0;
    ASSERT_EQUAL(error, end);
}

CTEST(move, move_error)
{
    char board[8][8];
    Start_position(board);
    int x = 4, y = 1, xx = 4, yy = 3, mode = 2, end = 0;
    move_fig(board, &mode, x, y, xx, yy, &end);

    const int error = 2;
    ASSERT_EQUAL(error, end);
}

CTEST(check_rule, check_rule_error)
{
    char board[8][8];
    Start_position(board);
    int x = 1, y = 7, xx = 0, yy = 4, mode = 1;
    int result = check_rule(x, y, xx, yy, board[y][x], board[yy][xx], mode);

    const char need_result = 4;
    ASSERT_EQUAL(need_result, result);
}

CTEST(check_rule, check_rule_no_error)
{
    char board[8][8];
    Start_position(board);
    int x = 1, y = 7, xx = 0, yy = 5, mode = 1;
    int result = check_rule(x, y, xx, yy, board[y][x], board[yy][xx], mode);

    const char need_result = 0;
    ASSERT_EQUAL(need_result, result);
}
