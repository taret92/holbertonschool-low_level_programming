#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string
 * Return: Recursion
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	if (s <= 0)

	return (_puts_recursion(*s + 1));

}
