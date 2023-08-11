#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints num base 16
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	int d = 48;

	while (d <= 102)
	{
		putchar(d);
		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');
	return (0);
}
