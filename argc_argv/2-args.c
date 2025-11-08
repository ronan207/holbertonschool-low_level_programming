#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: size of argv array and number command line arguments
 *
 * @argv: an array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
