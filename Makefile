
all: 
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test.exe

clean:
	rm test.exe
