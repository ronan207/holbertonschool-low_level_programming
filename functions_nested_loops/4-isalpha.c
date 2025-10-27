#include"main.h"

/**
 * _isalpha - Print a lowercase or othercase if is 1
 * @c: is my variable
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
