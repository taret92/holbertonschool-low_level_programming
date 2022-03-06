#include "main.h"

/**
 * _memset - Fills memory with a constant
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
