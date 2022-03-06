#include "main.h"
#include <stdio.h>
/**
 * main - maing function
 * @argc: number of objects
 * @argv: array of content
 * Return: 0
 */

int main(int argc, char  __attribute__((unused)) *argv[])
{
int i;

	for(i = 0; i < argc; i++)
		;
	printf("%d\n", argc - 1);
	return (0);
}
