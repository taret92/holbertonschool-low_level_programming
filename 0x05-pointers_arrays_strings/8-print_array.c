#include "main.h"
#include <stdio.h>
/**
*print_array - Entry point
*@a: is a the iterador
*@n: is a condition
* Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
	int j;

	if (n < 0)
	{
		printf("\n");
		printf("\n");
	}
	for (j = 0; j <= (n - 1); j++)
	{
		if (j != (n - 1))
		{
			printf("%d, ", a[j]);
		}
		else
		{
			printf("%d\n", a[j]);
		}
	}
}
