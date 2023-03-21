#include <unistd.h>
#include "main.h"
/**
 * main - the function to print putchar without printf
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
