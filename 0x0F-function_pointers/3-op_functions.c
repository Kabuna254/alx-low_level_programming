#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add -function that adds
  * @a: first parameter to be added
  * @b: second parameter to be added
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that gets the difference
  * @a: first parameter
  * @b: second parameter
  * Return: difference of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that multiplies
  * @a: first parameter to be multiplied
  * @b: second parameter to be multiplied
  * Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that divides
  * @a: first parameter
  * @b: second parameter
  * Return: result of the division of a by b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function that returns the remainder of the division
  * @a: first parameter
  * @b: second parameter
  * Return: the remainder of the division of a by b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
