#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal
 * void no return
 */

void print_line(int n)
{
	int print;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(print = 0 ; print < n ; print++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
