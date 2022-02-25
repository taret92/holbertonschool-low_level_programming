#include "main.h"
/**
 * _strncpy - copy source to destyny str
 * @dest: destination
 * @src: source
 * @n: size of destination
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)

{
int i;
int j = 0;

for (i = 0 ; i < n ; i++)
	{
	if (src[i] == '\0')
	j = 1;

	if (j == 0)
	{
	dest[i] = src[i];
	}
	else
	{
	dest[i] = '\0';
	}
	}

return (dest);
}
