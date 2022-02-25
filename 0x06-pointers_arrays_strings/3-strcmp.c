#include "main.h"

int _strcmp(char *s1, char *s2)

{
int i = 0;
int a = 0;

while (s1[i] == s2[i])
	{
	if (s1[i] == '\0')
		return (0);
	i++;
	}
a = (s1[i] - s2[i]);
return (a);

}
