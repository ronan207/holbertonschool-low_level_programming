#include "main.h"

/**
 * the fonction: puts_half - Write a function that prints half of a string
 * len : len is my first variable
 * temp : is my second varibale
 * @str : is the argument
 */

void puts_half(char *str)
{
	int len = 0, temp;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)

		temp = len / 2;

	else

		temp = (len - 1) / 2;

	while (str[temp] != '\0')
	{
		_putchar(str[temp]);

		temp++;
	}
		_putchar('\n');
}

