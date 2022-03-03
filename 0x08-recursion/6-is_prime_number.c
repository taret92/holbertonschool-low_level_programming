#include "main.h"

/**
 * primex - evaluate 1 to n
 * @a: n
 * @b: number from 1 to n
 *
 * Return: 1.
 * error -1
 */
int primex(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (primex(a, b + 1));
}
/**
 * is_prime_number - prime number
 * @n: Number
 *
 * Return: On success 1.
 * error, -1 
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primex(n, 2));
}
