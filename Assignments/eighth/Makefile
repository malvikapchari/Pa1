
#this is how to set it up for program one, do same thing for all 9 programs
#but change it to second, third, fourth etc in replace of "first" everywhere

all: eighth

eighth: eighth.o
	gcc -Wall -Werror -fsanitize=address eighth.o -o eighth

eighth.o: eighth.c eighth.h #the first.h is the header page
	gcc -Wall -Werror -fsanitize=address -g -c eighth.c

clean:
	rm -rf *.o eighth