#include "main.h"

/**
 * print_square - print a square :)
 * @size: size of the sqaure
 * Return: void
 */

void print_square(int size)
{
	char a;
	char c;

		if (size > 0)
	{
		for (a = 0; a < size; a++)
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
