#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints 0-9
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
