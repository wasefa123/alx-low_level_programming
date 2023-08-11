#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		putchar(w);
		w++;
	}
	putchar(\n);
	return (0);

}
