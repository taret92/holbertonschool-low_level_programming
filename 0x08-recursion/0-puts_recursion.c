#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * Return: Recursion
 */

void _puts_recursion(char *s)

	if (s == '\0')
{		_putchar ('\n');
		return;

}
	_putchar (_puts_recursion (s + 1));
	_putchar (*s)

}
