#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	_putchar(number % 10 + '0');
	}
	_putchar('\n');

}
