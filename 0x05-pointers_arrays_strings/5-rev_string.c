#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string
 * @s: pt
  */

void rev_string(char *s)

{
int a, l, t;

	l = strlen(s);

	for (a = 0; a < l / 2; a++)

	{
		t = s[a];
		s[a] = s[l - a - l];
		s[l - a - l] = t;
	}

}
