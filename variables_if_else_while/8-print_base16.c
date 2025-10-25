#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;
	char ch;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

