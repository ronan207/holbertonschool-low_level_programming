#include"main.h"

/**
 * the fonction; print_rev - Write a function that prints a string in reverse
 * count: is my first variable
 * i: is my second variable
 * @s: s is the argument
 */

void print_rev(char *s)
{
	int count, i;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
