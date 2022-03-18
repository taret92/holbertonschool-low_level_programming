#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that find an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: first element or -1 in error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
