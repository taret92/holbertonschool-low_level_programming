#include "main.h"

/**
 * cap_string - capitalizes
 * @s: string.
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char space[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; space[j]; j++)
		{
			if ((s[i - 1] == space[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] = (s[i] - 32);
			else if (s[0] >= 97 && s[0] <= 122)
				s[0] = (s[0] - 32);
		}
	}
	return (s);
}
