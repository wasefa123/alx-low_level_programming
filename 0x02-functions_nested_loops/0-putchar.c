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

	for (w = 0; w <= 8; w++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
