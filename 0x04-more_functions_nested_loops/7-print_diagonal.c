#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of rimes the \ character should be print
 *
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (postn = 1; posten <= postn; space++)
				_putchar(' ');
			_putchar(92); /* is equl to '/' char*/
			_putchar('\n');
		}
	}
}
