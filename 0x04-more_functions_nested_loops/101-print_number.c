#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 */

void print_number(int n){
    int i;

    if (n == 0)
		_putchar('0');
    else{
        if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	    if (n / 10)
		print_number(n / 10);

	    _putchar(n % 10 + '0');
    }
}
