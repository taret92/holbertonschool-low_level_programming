#include "main.h"

/**
 * print_alphabet_x10 - print x10 the alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0, c;

	while (a < 10)
	{
		c = 'a';
		while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	a++;
	}
}
