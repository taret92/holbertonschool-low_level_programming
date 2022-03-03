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
		return (-1);

		return (_pow_recursion(x * (y + 1)));



}
