#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
