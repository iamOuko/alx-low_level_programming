#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number
* @nld: number's last digit result
* Return: value of the last digit
*/
int print_last_digit(int a)
{
	int b;

	b = (a % 10);

	if (b < 0)
	{
		b = (-1 * b);
	}

	_putchar(b + '0');
	return (b);
}
