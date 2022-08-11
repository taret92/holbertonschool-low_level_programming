#include "search_algos.h"

/**
 * @brief 
 * 
 * @array: ponter to the first element 
 * @size: number of elements in the array 
 * @value: value to search 
 * Return: i 
 */

int linear_search(int *array, size_t size, int value)
{ 
	 size_t i = 0;
	while (array && i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
		i++;
    } 
    return -1;
} 
