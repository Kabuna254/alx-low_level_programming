#include "main.h"

/**
 * main - check for uppercase character
 * @m: parameter of the function
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int m)
{
	if (m >= 65 && m <= 90)
	{
		return (1);
	}
	return (0);
}
