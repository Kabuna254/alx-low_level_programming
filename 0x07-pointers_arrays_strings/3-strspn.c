#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a string containing a prefix substring whose length is to be gotten
 * @accept: string containing characters used to check the prefix substring.
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int length = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
