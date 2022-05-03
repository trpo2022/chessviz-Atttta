#include <stdio.h>
#include <stdlib.h>

#define Height 8
#define Widths 8

void move_fig(char board[8][8], int* mode, int x, int y, int xx, int yy){
	char obmen;
	switch(*mode){
		case 1:
			if(board[yy][xx]!=' ') printf(" error, quite move. \n");
			else{
				board[yy][xx]=board[y][x];
				board[y][x]=' ';
			}
		break;
		case 2:
			if(board[yy][xx]==' ') printf(" error, capturing. \n");
			else{
				board[yy][xx]=board[y][x];
				board[y][x]=' ';
			}
		break;
	}
}
