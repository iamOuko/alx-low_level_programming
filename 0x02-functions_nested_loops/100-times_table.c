#include "main.h"
/**
* print_times_table - a function that prints the n times table starting from 0
*
* @n: number input Ranges from 0-15 (inclusive)
*
*/
void print_times_table(int n)
{
	int row, col, i;

	i = 0;

	if (!(n > 15 || n < 0))
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col += i)
			{
				_putchar((col + '0'));
			}
			i++;
			_putchar('\n');
		}
	}
}
