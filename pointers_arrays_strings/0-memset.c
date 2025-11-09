#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: is my pointer
 * @b: is value to be copied
 * @n: is numbers of octe
 * Return: to the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)

	s[i] = b;

return (s);
}
