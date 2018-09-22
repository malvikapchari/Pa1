all: first

first: first.o
	gcc -Wall -Werror -fsanitize=address first.o -o first

first.o: first.c first.h #the first.h is the header page
	gcc -Wall -Werror -fsanitize=address -g -c first.c

clean:
	rm -rf *.o first