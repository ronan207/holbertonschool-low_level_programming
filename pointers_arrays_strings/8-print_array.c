#include "main.h"
/**
 * print_array - Write a function that prints n elements of an array of integer
 * @a: is the argument
 * @n: is my second variable of the numbers in the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)

			printf(", ");

		i++;
	}
	printf("\n");
}
