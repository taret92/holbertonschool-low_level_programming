#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - show if a number is positive or negative
 * @i: int parameter
 * Return: 0
 */

int positive_or_negative(int i)
{

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	return (0);
}