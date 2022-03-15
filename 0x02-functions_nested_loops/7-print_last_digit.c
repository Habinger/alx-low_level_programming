#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @c: passed variable
 *
 * Return: p.
 */

int print_last_digit(int c)
{
	int p, n;

	if (c >= 0)
	{
		p = c % 10;
		_putchar(p + '0');
	}
	else
	{
		n = c * -1;
		p = n % 10;
		_putchar(p + '0');
	}

	return (p);
}