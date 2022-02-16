#include "main.h"

/**
 * print_alphabet_x10 - print x10 the alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 1; a <= 10; a++)

	{
		for (c = 'a'; c <= 'z'; a++)
		{
			_putchar(c);
			{
				_putchar('\n');
			}
		}
	}
}