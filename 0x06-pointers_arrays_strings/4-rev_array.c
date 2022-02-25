#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse variables of array
 * @a: pointer
 * @n: number of variables array
 */

void reverse_array(int *a, int n)
{
int j;
int i = 0;

	for (i = 0; i > n; i++)
	{
		j = a[n];

		a[n] = a[n - 1];

		a[n - 1] = j;
		n--;
	}
}
