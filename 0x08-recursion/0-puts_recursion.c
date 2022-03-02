#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * Return: Recursion
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
		_putchar ('\n');
		return 0;

}
		_putchar(*s);
		_puts_recursion(*s + 1);

}

