/*
 * This very cool program
 * prints "Hello World"
 * to the screen
 *
 * 2026  Rudy Matela & Cooler Rudy
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argv[1]) {
		printf("Hello, %s\n", argv[1]);
	} else {
		printf("Hello, World!\n");
	}
	return 0;
}
