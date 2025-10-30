#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @n: n is the number print to the caractere
 *
 * Return: void
 */

void print_diagonal(int n)

{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 2; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
