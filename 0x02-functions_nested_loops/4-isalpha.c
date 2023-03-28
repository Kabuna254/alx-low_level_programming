#include "main.h"

/**
  * _isalpha - function checks for alphabetic character
  *@c: parameter to be checked
  *Return: Always 1 (success) otherwise 0
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
