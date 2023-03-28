#include "main.h"

/**
  * _abs - function that computes absolute value
  *@a: parameter of the function
  * Return: 0 (success)
  */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
