#include "main.h"
/**
 * _pow_recursion - exponential
 * @x: value raised to y
 * @y: exponensial
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;

	if (y%2 == 0)
		return power(x, y/2)*power(x, y/2);

		return x*power(x, y/2)*power(x, y/2);
}
