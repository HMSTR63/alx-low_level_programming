#include "main.h"

/**
 * main - print numbers 1 - 100 folliwed by a new line
 *	numbers that are multiples of 3 print Fizz
 *	numbers thet are multiples of 5 print Buzz
 *	numbers that are multiples of 3 and 5 print Fizz Buzz
 *	each number and word to be separated by space
 *
 * Return: 0 (Success)
*/

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
