#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Retyrn: 0 (Seccess)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');  /*If size is 0 or less, print only a new line*/
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');  /*Print the '#' character to form the square*/
			}
			_putchar('\n');  /*Move to the next line after each row*/
		}
	}
}
