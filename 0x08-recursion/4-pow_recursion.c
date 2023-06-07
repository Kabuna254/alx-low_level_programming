#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: value of exponentiation
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recutsion(x, y - 1));
	}
}
