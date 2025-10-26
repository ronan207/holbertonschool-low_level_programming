#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 * Description print_alphabet by a new line
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
