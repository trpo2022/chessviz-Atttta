#include <stdio.h>

#define Height 8
#define Widths 8

void Start_position(char a[Height][Widths]) {
  for (int y = 0; y < Height; y++) {
    switch (y) {
    case 0:
      for (int x = 0; x < Widths; x++) {
        if (x == 0 || x == 7)
          a[y][x] = 'r';
        if (x == 1 || x == 6)
          a[y][x] = 'n';
        if (x == 2 || x == 5)
          a[y][x] = 'b';
        if (x == 3)
          a[y][x] = 'q';
        if (x == 4)
          a[y][x] = 'k';
      }
      break;
    case 1:
      for (int x = 0; x < Widths; x++) {
        a[y][x] = 'p';
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    default:
      for (int x = 0; x < Widths; x++) {
        a[y][x] = ' ';
      }
      break;
    case 6:
      for (int x = 0; x < Widths; x++) {
        a[y][x] = 'P';
      }
      break;
    case 7:
      for (int x = 0; x < Widths; x++) {
        if (x == 0 || x == 7)
          a[y][x] = 'R';
        if (x == 1 || x == 6)
          a[y][x] = 'N';
        if (x == 2 || x == 5)
          a[y][x] = 'B';
        if (x == 3)
          a[y][x] = 'Q';
        if (x == 4)
          a[y][x] = 'K';
      }
      break;
    }
  }
}

void Print_board(char a[Height][Widths]){
	int num=1;
	for(int y=0;y<8;y++){
		printf("%d",num);
		for(int x=0;x<8;x++){
			printf(" %c",a[y][x]);
		}
		num++; printf("\n");
	}
	printf("  a b c d e f g h\n");
}


int main() {
  char board[Height][Widths];
  Start_position(board);
  for (int y = 0; y < Height; y++) {
    for (int x = 0; x < Widths; x++) {
      printf(" %c", board[y][x]);
    }
    printf("\n \n");
  }
  return 0;
}
