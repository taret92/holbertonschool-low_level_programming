#include "main.h"
/**
 * _strlen_recursion - return total bytes
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)

{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));


}
