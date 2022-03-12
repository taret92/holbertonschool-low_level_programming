#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements
 * @size: size
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *thecalloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	thecalloc = malloc(nmemb * size);

	if (thecalloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		thecalloc[i] = '\0';

	return (thecalloc);
}
