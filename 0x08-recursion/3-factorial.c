#include "main.h"
/**
 * factorial - factorial of number
 * @n: number
 * Return: factorial
 */
int factorial(int n)

{
	if (n <= 0)

		return (n + 1);


	return (n * factorial(n - 1));

}
