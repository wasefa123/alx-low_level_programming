#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints 0:9
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);

}
