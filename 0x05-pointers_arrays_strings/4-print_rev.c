#include "main.h"
/**
 * print_rev - print in reverse the string
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)

	{
	}

	for (b = a - 1; b >= 0; b--)

	_putchar(s[b]);
	_putchar('\n');

}
