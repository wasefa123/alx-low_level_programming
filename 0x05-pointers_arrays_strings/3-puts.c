#include"main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 *
 * @str: string input parameter
 *
 * Return: nothing to retirn
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
