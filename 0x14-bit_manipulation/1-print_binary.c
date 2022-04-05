#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - print a number in binary
 * @n: number
 */

void print_binary(unsigned long int n)
{

		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');

	return (-1);

}
