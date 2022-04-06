#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: diference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int i;

	for (i = 0; j; j >>= 1)
	{
		if (j & 1)
		{
			i++;
		}
	}
	return (i);
}
