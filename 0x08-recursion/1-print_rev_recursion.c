#include "main.h"
/**
 * _print_rev_recursion - print a reverse string
 * @s: string
 * Return: reverse string
 */

void _print_rev_recursion(char *s)

{
	if (!s || !*s)

		return (0);

	_print_rev_recursion (s + 1);

	putchar(*s);

}
