CFLAG = -Wall -Werror

chess: main.o
	gcc main.o -o $@

main.o: main.c
	gcc -c $(CFLAG) main.c

clean:
	rm *.o 
	rm chess
