#include "main.h"

/**
 * 0_memset - function that fills memory with a constant byte
 * @s: pointer To address(buffer)
 * @b: constant byte
 * @n: the size of address(buffer) to fill
 *
 * Return: return pointer to destination address
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
