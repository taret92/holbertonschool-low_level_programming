#include "main.h"

/**
 * *_strcpy - this function reset n for the value 98
 * @dest: a char value
 * @src: a char value
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
