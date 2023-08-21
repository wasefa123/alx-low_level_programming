#include"main.h"

/**
 * print_rev -  a function that prints a string
 *               in reverse, followed by a new line
 *
 * @s: pointer to the string
 * Return: (void)
*/

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
