#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the alphabet in lowercase.
 * Return: 0 always success.
 *
 */

int main(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
	putchar(c);
putchar('\n');
return (0);
}
