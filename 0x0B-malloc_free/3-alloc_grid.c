#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - malloc bidimensional
* @i: first variable 
* @j: second variable
* Return: grid
*/

int **alloc_grid(int width, int height)
{
	int **out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	out = malloc(sizeof(int *)* height);
	if (out == NULL)
	
		return (NULL);

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(sizeof(int)* width);
		if (out[i] == NULL)
  { 
      while (i >= 0)
        { 
        free(out[i]);
        i--;
        }
        free(out);
    return (NULL);
    }
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			out[i][j] = 0;

	return (out);
}
