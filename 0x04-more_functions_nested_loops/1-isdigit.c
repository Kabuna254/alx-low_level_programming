#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *@x: parameter of the function
 * Return: Always 1 if digit otherwise 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
