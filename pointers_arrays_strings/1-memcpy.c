#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: is my first pointers
 * @src: is my second pointers
 * @n : is numbers of array
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

for (i = 0; i < n ; i++)


	dest[i] = src[i];


return (dest);
}
