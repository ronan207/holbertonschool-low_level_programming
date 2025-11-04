#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *
 * @dest: dest is the first argument
 * @src: src is the second argument
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{

	dest[i] = src[i];

		i++;
	}
	dest[i] = '\0';

	return (dest);
}
