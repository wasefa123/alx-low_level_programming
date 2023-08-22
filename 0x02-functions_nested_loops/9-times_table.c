#include<stdio.h>

/**
 * main - Entry point
 *
 * * Description: a function that prints the 9 times table,
 *                    starting with 0.
 *
 * Return: 0 (success)
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
