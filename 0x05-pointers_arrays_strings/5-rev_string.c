#include"main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: string input
 *
 * Return: nithing to return
*/

void rev_string(char *s)
{
	int i, j;
	char t;

	for (i = 0, s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; j++)
	{
		t = s[j];
		s[j] = s[i - i - i];
		s[i - i - i] = t;
	}
}
