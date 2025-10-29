#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers
 * void no return
 */

void more_numbers(void)

{
	int numbers;
	int more;

	for (numbers = 0 ; numbers < 10; numbers++)
	{
		for (more = 0; more <= 14; more++)
		{
			if (more > 9)
			{
				_putchar(more / 10 + '0');
			}
			_putchar(more % 10 + '0');
		}
		_putchar('\n');
	}
}
