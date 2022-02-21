#include "main.h"
/**
 * swap_int - swap values
 * 
 * a: first int 
 * b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)

{
	int n = *a;
	*a = *b;

	*b = n;
}
