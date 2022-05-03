#include <stdio.h>

#define Height 8
#define Widths 8

void Start_position(char a[Height][Widths])
{
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

void Print_board(char a[Height][Widths])
{
    int num = 1;
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

void write_read(int *x, int*y, int *xx, int* yy, int* ex){
	int second=0;
	char input[20];
	fflush(stdin);
	printf("\n Write (# for breake) - ");
	//scanf("%c",input);
	fgets(input,20,stdin);
	input[strlen(input)-1]='\0';
	for(int symbol=0;symbol<strlen(input);symbol++){
		//printf("%c ",input[symbol]);
		if (input[symbol] == '-')
            second = 1;
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

        if (input[symbol] == 'a' && second == 1 )
            *xx = 0;
        else if (input[symbol] == 'b' && second == 1 )
            *xx = 1;
        else if (input[symbol] == 'c' && second == 1 )
            *xx = 2;
        else if (input[symbol] == 'd' && second == 1 )
            *xx = 3;
        else if (input[symbol] == 'e' && second == 1 )
            *xx = 4;
        else if (input[symbol] == 'f' && second == 1 )
            *xx = 5;
        else if (input[symbol] == 'g' && second == 1 )
            *xx = 6;
        else if (input[symbol] == 'h' && second == 1 )
            *xx = 7;
        else if (input[symbol] == '1' && second == 1 ) {
            *yy = 0;
        } else if (
                input[symbol] == '2' && second == 1 ) {
            *yy = 1; 
        } else if (
                input[symbol] == '3' && second == 1 ) {
            *yy = 2;
        } else if (
                input[symbol] == '4' && second == 1 ) {
            *yy = 3;
        } else if (
                input[symbol] == '5' && second == 1 ) {
            *yy = 4;
        } else if (
                input[symbol] == '6' && second == 1 ) {
            *yy = 5;
        } else if (
                input[symbol] == '7' && second == 1 ) {
            *yy = 6;
        } else if (
                input[symbol] == '8' && second == 1) {
            *yy = 7;
        }
	} 
	
	
	
	
}

int main()
{
    char board[Height][Widths];
    Start_position(board);
    Print_board(board);
    int x=0, y=0, x1=0, y1=0, end=0;
    while(end==0){
    	write_read(&x,&y,&x1,&y1,&end);
    	printf(" %d-%d  %d-%d",x,y,x1,y1);
    	//end++;
	}
    return 0;
}
