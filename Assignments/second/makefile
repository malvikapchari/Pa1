all: second

second: second.o
	gcc -Wall -Werror -fsanitize=address second.o -o second

second.o: second.c second.h #the second.h is the header page
	gcc -Wall -Werror -fsanitize=address -g -c second.c

clean:
	rm -rf *.o second