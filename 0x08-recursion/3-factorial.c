#include "main.h"

/**
 * factorial - function hat returns the factorial of a given number
 * @n: input number
 * Return: -1 if n is lower than 0, 1 if n is equals 0 or the factorial of the
 * given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
