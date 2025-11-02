#include"main.h"

/**
 * the fonction: rev_string - Write a function that reverse a string
 * count: is my first variable
 * i: is my second variable
 * @s: s is the argument
 * temp is my variable temporary
 */

void rev_string(char *s)
{
	int count, i;
	char temp;

	for (count = 0; s[count] != '\0'; count++)


	for (i = 0 ; i < count / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = temp;
	}
}
