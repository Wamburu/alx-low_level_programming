#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints all possible different
 * combinations of two digits.
 * Return: 0 (success)
 */

int main(void)
{
	int d;
	int y;

	for (d = '0'; d < '9'; d++)
	{
		for (y = d + 1; y <= '9'; y++)
		{
			if (y != d)
			{
				putchar(d);
				putchar(y);
				if (d == '8' && y == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
