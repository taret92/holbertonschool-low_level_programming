#include "function_pointers.h"

/**
 * array_iterator - function that executes a
 * function given as a parameter on each
 * element of an array
 * @array: Pointer to array
 * @size: number of elements
 * @action: pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}