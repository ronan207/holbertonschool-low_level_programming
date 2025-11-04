#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * @i : i is my first variable
 * @temp : temp is my second varibale
 *
 */

void puts_half(char *str)

{
	int i, temp;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)

		temp = i / 2;

		else

			temp = (i - 1) / 2;
	}
	while (str[temp] != '\0')
	{
		_putchar(str[temp]);

		temp++;
	}
		_putchar('\n');
}

