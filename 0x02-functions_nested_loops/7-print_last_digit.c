#include "main.h"

/**
  * print_last_digit - prints the last digi
  * @i: parameter of the function
  * Return: 0 (success)
  */

int print_last_digit(int i)
{
	int m;

	m = i % 10;
	if (i < 0)
	{
		m = -(m);
	}
	return (m);
}
