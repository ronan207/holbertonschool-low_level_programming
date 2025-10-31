#include"main.h"

/**
 * _puts - Write a function that prints a string
 * @str: str is my string
 *
 *
 */

void _puts(char *str)

{
	int count;

	for (count = 0 ; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
