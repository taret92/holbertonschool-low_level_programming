#include "main.h"

/**
 * print_last_digit - print last digit of an int
 * @r: integer
 * Return: 0
 */

int print_last_digit( int r)
{
	int lastdigit, d;

	lastdigit = r % 10;

	if (r < 0)

	{
		d = lastdigit * -1;
		_putchar(d);
	}
	else
	{
		_putchar(lastdigit + '0');
	}
	return(lastdigit);
}