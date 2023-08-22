#include"main.h"

/**
 * Description: times_table - a function that prints the 9 times table,
 *                    starting with 0.
 *
 * Return: 0 (success)
*/

void times_table(void)
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
		d++
	}
	putchar('\n');
	return (0);

}
