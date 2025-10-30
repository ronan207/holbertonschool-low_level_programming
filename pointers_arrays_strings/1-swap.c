#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers
 * @temp is my variable temporaire
 * @a: variable a
 * @b: variable b
 * no return because void
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
