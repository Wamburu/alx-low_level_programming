#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0
 * Return: 0 (always a success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');

	return (0);
	}
