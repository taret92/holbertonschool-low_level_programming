#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: the number of arguments of the file.
 * @argv: the array of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int quantity, number;
	int sum = 0;

	for (quantity = 1; quantity < argc; quantity++)
	{
		for (number = 0; argv[quantity][number]; number++)
		{
			if (argv[quantity][number] < '0' || argv[quantity][number] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[quantity]);
	}
	printf("%d\n", sum);
	return (0);
}
