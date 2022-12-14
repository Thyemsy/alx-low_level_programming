#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer that point string
 * @c: char that locate string
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
