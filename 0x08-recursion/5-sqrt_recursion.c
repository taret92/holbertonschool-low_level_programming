#include "main.h"

/**
 * sqrt -evaluate 1 to n
 * @a: n
 * @b: iterates 1 to n
 * Return: On success 1
 * On error, return -1
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number
 *
 * Return: On success 1.
 * Onerror, return -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
