#include "main.h"
/**
 * _memcpy - copies n bytes from memory
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

char *cp;

cp = dest;
	while (n > 0)

	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (cp);

}
