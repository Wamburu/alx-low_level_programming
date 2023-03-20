#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: 0 (always success)
 */

int main(void)
{
	char d;

	for (d = 'z'; d <= 'a'; d--)
		putchar(d);
	putchar('\n');

	return (0);
}
