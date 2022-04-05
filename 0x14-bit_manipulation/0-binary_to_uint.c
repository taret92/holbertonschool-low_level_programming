#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary num
 * Return: unsigned int
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	{
	if (b != 0)
	return (0);
	}

	for (i = 0; b[i]; i++)
	{
		num <<= 1;
		if (b[i] == 1)

			num += 1;
	}
	return (num);
}
