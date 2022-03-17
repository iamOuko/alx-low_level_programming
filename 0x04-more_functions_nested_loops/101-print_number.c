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
			i = n * -1;
			_putchar('-');
		}
    }
}