#include"main.h"

/**
 * _islower - Print a lowercase if is 1 and print othercase if is 0
 * @c: is my variable
 * Return: 0 or 1
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
