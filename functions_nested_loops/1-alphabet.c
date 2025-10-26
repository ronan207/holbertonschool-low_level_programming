#include "main.h"

/**
 * main - Entry point
 * the fonction print_alphabet
 * Always return 0 (Succes)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);

	}
		_putchar('\n');
}
