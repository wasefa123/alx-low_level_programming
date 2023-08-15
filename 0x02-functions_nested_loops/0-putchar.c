#include "main.h"

/**
 * main -entry point
 *
 * Description: prints _putchar
 *
 * Return: 0(success)
 *
*/

int main(void)
{
	char str[] = "_putchar";
	int w;

	for (w = 0; w <= 7; w++)
		_putchar(str[w]);
	_putchar('\n');
	return (0);
}
