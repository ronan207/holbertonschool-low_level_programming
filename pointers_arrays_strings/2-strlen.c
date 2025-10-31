#include"main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @s: s is my variable
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
