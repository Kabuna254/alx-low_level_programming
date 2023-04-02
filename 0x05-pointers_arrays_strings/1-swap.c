#include "main.h"
#include <stdio.h>

/**
  * swap_int - function that swaps the value of integers
  * @a: first integer to be swapped
  * @b: second integer to be swapped
  * Return: empty
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
