#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	char w = 'a';
	char M = 'A';

	while (w <= 'a')
	{
		putchar(w);
		w++;
	}
	while (M <= 'Z')
	{
		putchar(M);
		M++;
	}
	putchar('\n');
	return (0);
}
