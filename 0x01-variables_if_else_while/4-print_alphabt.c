#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 (always a success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
return (0);
}
