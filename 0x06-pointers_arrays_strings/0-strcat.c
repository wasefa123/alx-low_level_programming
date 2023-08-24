#include "main.h"

/**
 * _strcat - function that concatenat two string
 *
 * @dest: dastination input pointer
 * @src: source input pointer
 *
 * Return: pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int w, w2;

	w = 0;
	while (dest[w])
		w++;
	for (w2 = 0; src[w2] ; w2++)
		dest[w2++] = src[w2];

	return (dest);
}
