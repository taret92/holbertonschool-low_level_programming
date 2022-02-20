#include "main.h"

/**
 * print_square - prints a square :)
 * @size: size of the sqaure
 * Return: void
 */

void print_square(int size)
{
	char r;
	char c;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{

		for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
		
				_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
