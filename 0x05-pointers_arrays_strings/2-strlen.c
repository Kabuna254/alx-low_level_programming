#include "main.h"
#include <stdio.h>

/**
  * _strlen - function that returns the length of a string.
  * @str: the string to get the length of
  * Return: The length of string
  */

int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
