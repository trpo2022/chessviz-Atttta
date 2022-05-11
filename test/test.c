#include <ctest.h>
#include <stdio.h>

#include <lib/check_rule.h>
#include <lib/move_fig.h>
#include <lib/start_position.h>

CTEST(move, move_figure){
	char board[8][8];
	Start_position(board);
	int x=4, y=1, xx=4, yy=3, mode=0, end=0;
	move_fig(board,&mode,x,y,xx,yy,&end);
	
	const int error = 0;
	ASSERT_EQUAL(end,error);


}

