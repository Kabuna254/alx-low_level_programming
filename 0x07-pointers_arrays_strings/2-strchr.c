#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: character to be found
 * Return: c a ponter to the first occurance and
 * Null if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
