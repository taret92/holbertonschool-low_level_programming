#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void *malloc_checked(unsigned int b)

{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}