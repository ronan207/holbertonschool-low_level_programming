#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs a simple arithmetic operation
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, or error codes
 */

int main(int argc, char *argv[])
{
	int num1, num2;
int (*fcalc)(int, int);

	if (argc != 4)
	{
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		exit(99);
	}
	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		exit(100);
	}

	fcalc = get_op_func(argv[2]);

	printf("%d\n", fcalc(num1, num2));

		return (0);
}
