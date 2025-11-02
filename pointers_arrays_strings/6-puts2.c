#include"main.h"

/**
 * the fonction: puts2 - Write a function that prints
 * every other character of a string, starting with the first character
 * count: is my first variable
 * @str: str is the argument
 *
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{

		if (count % 2 == 0)

			_putchar(str[count]);
	}
	_putchar('\n');
}
