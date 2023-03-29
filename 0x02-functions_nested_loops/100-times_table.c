#include "main.h"

/**
  * print_times_table - function that prints the n times table
  * @n: parameter value of the function
  * Return: 0 (success)
  */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 99 && prod <= 9)
				{
					_putchar(' ');
				}
				else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
