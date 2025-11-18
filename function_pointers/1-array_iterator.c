#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Write a function that execute a function
 * given as a parameter on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function is used
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)

		return;
	for (i = 0 ; i < size; i++)

	(action)(array[i]);
}
