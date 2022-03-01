#include "main.h"




char *_strstr(char *haystack, char *needle)

{

int j; 
int k; 
int i = 0;
	while (haystack[i] != '\0');
	{

	while (needle[j] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			k = &haystack[i];
			return (k);
		}
		j++;
	}
	i++;

	}

	return (0);

}

