#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes from s2
 * Return: pointer to s1 concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, k = 0;

	if (s1)
	{
		while (s1[i])
			i++;
	}

	if (s2)
	{
		while (s2[j])
			j++;
	}

	if (j > n)
		j = n;

	arr = malloc(sizeof(char) * (i + j + 1));
	if (!arr)
		return ('\0');

	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		arr[i + k] = s2[k];
	}

	arr[i + j] = '\0';

	return (arr);
}
