#include "main.h"
/**
 * factorial - factorial of number
 * @n: number
 * Return: factorial
 */
int factorial(int n)

{
	if (n <= 0)

		return (-1);


	return (factorial(n * (n - 1)));

}
