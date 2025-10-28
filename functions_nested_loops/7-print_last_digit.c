#include"main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @numbers: is my variable
 * Return: 0
 */

int print_last_digit(int numbers)
{
	int last_numbers;

	last_numbers = numbers % 10;
	if (last_numbers < 0)
	{
		last_numbers = last_numbers * -1;
	}
	_putchar(last_numbers + '0');

	return (last_numbers);
}
