#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: is my variable
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
