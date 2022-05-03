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
	int hod=1, step=0;
    char board[Height][Widths];
    Start_position(board);
    Print_board(board,0);
    int x=0, y=0, x1=0, y1=0, end=0, mode=0;
    while(end==0){
    	write_read(&x,&y,&x1,&y1,&end,&mode);
    	move_fig(board,&mode,x,y,x1,y1);
    	Print_board(board,hod);
    	step+=1;
    	if(step==2){ hod+=1; step=0; }
	}
    return 0;
}
