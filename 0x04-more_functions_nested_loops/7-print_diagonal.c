#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should print
*/

void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (space = 1; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar(92); /* Backslash character */
			_putchar('\n');
		}
	}
}
