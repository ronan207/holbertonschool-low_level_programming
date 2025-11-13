#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: is my first string
 * @s2: is my second string
 * @n: The maximum number of bytes from s2 to concatenate to s1
 * Return: A pointer to a newly allocated space in memory containing
 * s1 followed by the first n bytes of s2 and null-terminated.
 * Returns NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;

	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	res = malloc(sizeof(char) * (len1 + n + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < n; j++)
		res[i + j] = s2[j];
	res[i + j] = '\0';

	return (res);
}
