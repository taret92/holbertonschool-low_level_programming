#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * @n: unsigned long int
 * @index: the index
 * Return: value of the bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 8 * sizeof(n))
		return (0);

	for (i = 0; i <= n; n >>= 1, i++)
	{
	if (index == i)
		{
		return (n & 1);
		}
	}
	return (-1);
}
