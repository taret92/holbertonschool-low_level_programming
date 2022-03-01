#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: where search
 * @needle: what search
 * Return: 0
 */



char *_strstr(char *haystack, char *needle)

{
int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
