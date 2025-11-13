#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: is my first argument
 * Return: the pointer exit 98 why it's null
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);
}
