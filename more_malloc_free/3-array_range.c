#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 *
 * @min: The minimum integer value.
 * @max: The maximum integer value.
 *
 * Description: This function allocates memory for an array of integers
 * containing all values from min up to max, inclusive. The values are stored
 * in ascending order. If min is greater than max or if memory allocation
 * fails, the function returns NULL.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */

int *array_range(int min, int max)

{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

