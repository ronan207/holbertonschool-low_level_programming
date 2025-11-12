#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new concatenated string,
 * or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	new_string = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < len2; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
