#include "holberton.h"
/**
 * print_line - function that draws a straight line in terminal
 * @n: parameter is n
 */

void print_line(int n)
{
	int z;

	if (n > 0)
	{
		for (z = 0; z < n; z++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

