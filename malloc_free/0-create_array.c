#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initialises it with a given character
 * @size: size of the array to be created
 * @c: character with which to fill the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *create_array;
unsigned int i;

	if (size == 0)
		return (NULL);

	create_array = malloc(sizeof(char) * size);
	if (create_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		create_array[i] = c;

	return (create_array);
}







