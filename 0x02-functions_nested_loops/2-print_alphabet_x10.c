#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	char h;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{	_putchar(h);
		}
		 _putchar('\n');
	}
}
