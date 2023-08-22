#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *         starting with the first character, followed by a new line
 *
 * @str: input string
 *
 * Return: nothing to return
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}