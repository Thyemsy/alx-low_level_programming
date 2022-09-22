#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: the destination of concat
 * @src: the source f concat string
 *
 * Return: return char value
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i + j] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
